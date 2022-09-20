//wap  to extract the bits
algorithm
*start
*program to extract bits using bitwise operators
*in first function it prints binary to decimal
*second function is for extarcting the bits 
*in this function take if condition for wheather which bit is high or low

#include<stdio.h>
void print_binary(int num)//function definition for the print binary
{
	printf("\nin binary format :  \n");
		for(int i=7;i>=0;i--)//it is 8 bit data so iteration from 7 to 0
			{
				if( num & (1<<i))//extract each bit from the number and print it MSB first
					printf("%d",1);	//if it is high then print 1
				else
					printf("%d",0);	//if it is high then print 0
			}
}
void bit_extract(int num1,int position)	//function for checking the bit
{
   if((num1) & (0x01<<position))	//check weather the bit is high or low
			printf("\n%d bit is 1",position);
		else
			printf("\n%d bit is 0",position);
}
int main()
{
	setbuf(stdout,NULL);
	int num1,position; //deaclare variable
	printf("enter the number and bit:");	//take user input from user
	scanf("%d%d",&num1,&position);
	print_binary(num1);	//printing the binary of user input
    bit_extract(num1,position);
	return 0;
}