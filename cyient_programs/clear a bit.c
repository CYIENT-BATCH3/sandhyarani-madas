//wap to program to clear a bit  and return value
*algoritm
 
 * program to find clearing a particular bit.
 * using pass by value concept for set value.
 * declare the function at global as set_bit
 * read the number and position from the user.
 * call function to define function.
 * in define function perform BIT AND operation to clear a bit.
 * it will prints after clearing the bit.
 
#include<stdio.h>
void clear_bit();					//function declaration
int main(){
	setbuf(stdout,NULL);
	int number,position;
	printf("enter the number\n");			//reading the variable
	scanf("%d",&number);
	printf("enter the position\n");
	scanf("%d",&position);
	clear_bit(number,position);			//calling function;
}
void clear_bit(int number,int position)			//function defination
{
	number = number & (~(1<<position));		//perform bit AND operation to clear a bit
	printf("after a clearing a bit:%d",number);	//prints after clearing a bit
}