//program for immobilizer based on the requirements


 Algorithm
  
 * 1.start
 * 2.configure system requirements and can requirements
 * 3.set baud rate
 * 4. in receiver side
 *    *collect data in address id 0x432 sent by the other ECU
 *    *check the data in  3,4,5,6,7 buffer  is 0xAA or not
 *    *if the data in  3,4,5,6,7 buffer  is 0xAA then open the door else close the door
 * 5. in transmitter side
 *   transmit the status of the door to other ECU in address id 0x932

 


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
void can_read();//can read function declaration
char VAL;//declaring variable
char can_rx[11];//declaring character  array of 11 elemenets

void system_init()//defining system_init function
{
    GIE = 1;//initializing global interrupt
    PEIE = 1;//initializing peripheral interrupt
}
void can_init()
{
    TRISBbits.RB2 = 0;//Setting the pin as output
    TRISBbits.RB3 = 1;//Setting the pin as input
    TRISDbits.RD4 = 0;//check led on or off(for direction for led purpose)
    PORTDbits.RD4=0;//condition checking led
    TRISDbits.RD0 = 0;//check led on or off(for direction for led purpose)
    PORTDbits.RD0 =0;//condition checking led
    IPR3bits.RXB0IP=1;//initializing receiver interrupts
    PIE3bits.RXB0IE=1;
}
void set_baud_rate()
{
    CANCON = 0x80;          //setting to configuration mode
    while(CANSTAT != 0x80); //checking status of configuration mode
    BRGCON1 = 0xC1;         //setting baud rate according to value @speed 250kbps
    BRGCON2 = 0xAE;
    BRGCON3 = 0x45;
     CANCON = 0x0E;         //setting to normal mode
}
void set_mask_filter()//defining mask_filter function
{
    RXM0SIDH = 0x00;//setting mask value
    RXM0SIDL = 0x00;//setting mask value
    RXF0SIDH = 0x00; //setting filter value
    RXF0SIDL = 0x00;//setting filter value
    RXB0CON=0x00;//receiver control register
}

void __interrupt() ISR1 ()//defining interrupt function
{
    PORTDbits.RD4=1;//setting RD4 to 1
   __delay_ms(2000);//delay
    if(RX0IF==1)//checking the value of receiver interrupt 
    {
        RX0IF=0;//value of receiver interrupt
    for(int i=0;i<5000;++i);
    PORTDbits.RD4=0;
    can_read();//Calling can read function
    }
}
void can_read()//defining can_read function and assigning the contents in the receiver buffer to array
{
   
    CANCON = 0x0E;//setting normal mode
    can_rx[0] = RXB0D0;
    can_rx[1] = RXB0D1;
    can_rx[2] = RXB0D2;
    can_rx[3] = RXB0D3;
    can_rx[4] = RXB0D4;
    can_rx[5] = RXB0D5;
    can_rx[6] = RXB0D6;
    can_rx[7] = RXB0D7;
    can_rx[8] = RXB0DLC;  //assigning DLC to array
    can_rx[9] = RXB0SIDH;   //assigning  to SIDHL to array
    can_rx[10] = RXB0SIDL; //assigning  to SIDHL to array
    RXB0CONbits.RXB0FUL = 0;//assigning RXB0FUL to 0  
 }
void can_write1(char VAL)//can write function
{
   
   __delay_ms(2000);//setting delay
    CANCON = 0x08;//setting to normal mode and selecting transmitter buffer
    
    //while(CANSTAT != 0x08);
    CIOCON = 0x20;//setting  CIOCON register
    TXB0SIDH = 0x00;//assigning extended id
    TXB0SIDL = 0x08;  //assigning extended id
    TXB0EIDH = 0x09;  //assigning extended id
    TXB0EIDL = 0x32;  //assigning extended id
    TXB0DLC = 0x08; //setting data length code
    TXB0D0 = 0x00;  
    TXB0D1 = 0x00;
    TXB0D2 = 0x00;
    TXB0D3 = VAL; //assigning the data to  buffer3
    TXB0D4 = 0x00;
    TXB0D5 = 0x00;
    TXB0D6 = 0x00;
    TXB0D7 = 0x00;
    TXB0CON = 0x08;//setting TXB0CON to 0x08
}


int main()
{
    system_init();//calling system_init function
    can_init();//calling can_init function
    set_baud_rate();//calling baud rate function
    set_mask_filter();//setting set_mask_filter function
     while(1)
    {
         if((can_rx[3]==0xAA)&& (can_rx[4]==0xAA) && (can_rx[5]==0xAA) && (can_rx[6]==0xAA) && (can_rx[7]==0xAA))//checking the condition for door open
         {
             PORTDbits.RD0 = 1;//enabling the status led
             for(int i=0;i<2000;++i);//delay
             can_write1(0x01);//calling can_write function for sending the data
         }
         else//if it is false
         {
             PORTDbits.RD0 = 0;//enabling the status led
             for(int i=0;i<2000;++i); //delay
             can_write1(0x00);//calling can_write function for sending the data
         }
    }
    
}

