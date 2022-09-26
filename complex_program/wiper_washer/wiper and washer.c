//PROGRAM for wiper and washer with requirements given



ALGORITHM
 
  
 * 1.start
* 2.configure system requirements and can requirements
* 3.set baud rate
* 4. in receiver side
*    *collect data in address id 0x221 sent by the other ECU
*    *check the data in  3 rd  buffer  for checking the rain status 2 and 3
*     *check the data in  3 rd  buffer  for checking the water tank status 5,6,7 th bits
*    
 * 5. in transmitter side
* 
 *   transmit the status of the rain and water tank to other ECU in address id 0x112


 



// CONFIG1H
#pragma config OSC = HS         // Oscillator Selection bits (HS oscillator)
#pragma config OSCS = OFF       // Oscillator System Clock Switch Enable bit (Oscillator system clock switch option is disabled (main oscillator is source))

// CONFIG2L
#pragma config PWRT = OFF       // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOR = OFF        // Brown-out Reset Enable bit (Brown-out Reset disabled)
#pragma config BORV = 25        // Brown-out Reset Voltage bits (VBOR set to 2.5V)

// CONFIG2H
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config WDTPS = 128      // Watchdog Timer Postscale Select bits (1:128)

// CONFIG4L
#pragma config STVR = OFF       // Stack Full/Underflow Reset Enable bit (Stack Full/Underflow will not cause Reset)
#pragma config LVP = OFF        // Low-Voltage ICSP Enable bit (Low-Voltage ICSP disabled)

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection bit (Block 0 (000200-001FFFh) not code protected)
#pragma config CP1 = OFF        // Code Protection bit (Block 1 (002000-003FFFh) not code protected)
#pragma config CP2 = OFF        // Code Protection bit (Block 2 (004000-005FFFh) not code protected)
#pragma config CP3 = OFF        // Code Protection bit (Block 3 (006000-007FFFh) not code protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot Block (000000-0001FFh) not code protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM not code protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection bit (Block 0 (000200-001FFFh) not write protected)
#pragma config WRT1 = OFF       // Write Protection bit (Block 1 (002000-003FFFh) not write protected)
#pragma config WRT2 = OFF       // Write Protection bit (Block 2 (004000-005FFFh) not write protected)
#pragma config WRT3 = OFF       // Write Protection bit (Block 3 (006000-007FFFh) not write protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) not write protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0001FFh) not write protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection bit (Block 0 (000200-001FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection bit (Block 1 (002000-003FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection bit (Block 2 (004000-005FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection bit (Block 3 (006000-007FFFh) not protected from Table Reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot Block (000000-0001FFh) not protected from Table Reads executed in other blocks)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include <xc.h>
#define _XTAL_FREQ 20000000
void can_read();//declaring function prototype
unsigned char val1;//declaring variable
unsigned char val2;//declaring variable
unsigned char var;//declaring variable
unsigned char can_rx[11];//declaring array for storing the contents in the buffer
void system_init()//defining system interrupt function
{
    GIE = 1; //enable all global interrupts
    PEIE = 1;//enable peripheral interrupts
}
void can_init()
{
    TRISBbits.RB2 = 0;              //Setting the pin as output
    TRISBbits.RB3 = 1;              //Setting the pin as input
    TRISDbits.RD4 = 0;              //check led on or off(for direction for led purpose
   PORTDbits.RD4=0;                //condition checking led
    TRISDbits.RD0 = 0;              //check led on or off(for direction for led purpose
    PORTDbits.RD0 =0;               //condition checking led
    IPR3bits.RXB0IP=1;              //enabling receiver peripheral interrupt
    PIE3bits.RXB0IE=1;
}
void set_baud_rate()
{
    CANCON = 0x80;                 //setting to configuration mode
    while(CANSTAT != 0x80);        //checking status of configuration mode
    BRGCON1 = 0xC1;                //setting baud rate according to value @speed 250kbps
    BRGCON2 = 0xAE;
    BRGCON3 = 0x45;
     CANCON = 0x0E;                //setting to normal mode
}
void set_mask_filter()
{
    RXM0SIDH = 0x00;            //setting the mask 
    RXM0SIDL = 0x00;
    RXF0SIDH = 0x00;            //setting the filter
    RXF0SIDL = 0x00;
    RXB0CON=0x00;               //setting receive buffer control register as '0'
}
void can_read()         //contents in the receiver buffer is stored in array
{
   
    CANCON = 0x0E;                      //setting control register as normal mode(for receiving)
    can_rx[0] = RXB0D0;
    can_rx[1] = RXB0D1;
    can_rx[2] = RXB0D2;
    can_rx[3] = RXB0D3;
    can_rx[4] = RXB0D4;
    can_rx[5] = RXB0D5;
    can_rx[6] = RXB0D6;
    can_rx[7] = RXB0D7;
    can_rx[8] = RXB0DLC;                
    can_rx[9] = RXB0SIDH;
    can_rx[10] = RXB0SIDL;
    RXB0CONbits.RXB0FUL = 0;           
    
 }
void can_write1(char var)               //defining can write function
{
   
   __delay_ms(2000);    //delay
    CANCON = 0x08;                      //CAN control register for normal mode (for transmitting)
    CIOCON = 0x20;                      //CAN input/output control register
    TXB0SIDH = 0x22;       //assigning the id to sidh
    TXB0SIDL = 0x40;      //assigning the id to sidl
    TXB0DLC = 0x08;        // setting data length code 
    TXB0D0 = var;         //assigning the var to buffer0 and transmitting
    TXB0D1 = 0x00;
    TXB0D2 = 0x00;
    TXB0D3 = 0x00;
    TXB0D4 = 0x00;
    TXB0D5 = 0x00;
    TXB0D6 = 0x00;
    TXB0D7 = 0x00;
    TXB0CON = 0x08;   //setting TXB0CON
}
void __interrupt() ISR1 ()//defining interrupt function
{
    PORTDbits.RD4=1;//setting RD4 to 1
   //__delay_ms(2000);
    if(RX0IF==1)//checking the value of receiver interrupt 
    {
        RX0IF=0;//value of receiver interrupt
    //for(int i=0;i<5000;++i);
    PORTDbits.RD4=0;
    can_read();//Calling can read function
    }
}
int main()
{
    system_init();//calling function
    can_init();//calling function
    set_baud_rate();//calling function
    set_mask_filter();//calling function
    while(1)
    {
         if((can_rx[9]== 0x44) && (can_rx[10]== 0x20))//checking id is 432 
         {
         if((can_rx[2]&0x0F)==0x04)//checking for slight rain
         {
             PORTDbits.RD0 = 1;
             val1=0x04;//assigning status to val1
            
            
         }
         else if((can_rx[2]&0x0F)==0x08)//checking for moderate rain
         {
             PORTDbits.RD0 = 1;
             val1=0x08;//assigning status to val1
             
             
            
         }
         else if((can_rx[2]&0x0F)==0x0C)//checking for heavy rain
         {
             PORTDbits.RD0 = 1;
             val1=0x0C;//assigning status to val1
           
            
         }
         else
         {
          val1=0x00;//by rain status is no rain
         }
         
          if((can_rx[2]&0xF0)==0x20)//Empty tank
         {
             PORTDbits.RD0 = 1;
             val2=0x20;//assigning status to val2
             
            
            
         }
         else if((can_rx[2]&0xF0)==0x40)//1/4 tank full
         {
             PORTDbits.RD0 = 1;
             
              val2=0x40;//assigning status to val2
           
            
         }
         else if((can_rx[2]&0xF0)==0x60)//tank 1/2 th full
         {
             PORTDbits.RD0 = 1;
             val2=0x60;//assigning status to val2       
         }
         else //tank  full
         {
             PORTDbits.RD0 = 1;
             val2=0x80;//by default tank value is assigned to tank full    
         }
         
    
         var=val1|val2;//finding var by taking logical or of val1 and val2
    
         can_write1(var);//calling can_write function
         }
    }
    
    
}
