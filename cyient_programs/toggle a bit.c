//wap to toggle bit with return type
*algorithm

 * program to find toggling a particular bit.
 * using pass by value concept for set value.
 * declare the function at global as set_bit
 * read the number and position from the user.
 * call function to define function.
 * in define function perform BIT XOR operation to clear a bit.
 * it will prints after toggle the bit.
 
#include<stdio.h>
void toggle_bit();//function declaration
int main(){
	setbuf(stdout,NULL);
	int number,position;
	printf("enter the number\n");//reading the variable
	scanf("%d",&number);
	printf("enter the position\n");
	scanf("%d",&position);
	toggle_bit(number,position);//calling function;
}
void toggle_bit(int number,int position)//function defination
{
	number = number ^ (1<<position);
	printf("after a toggling  a bit:%d",number);//prints after toggle a bit
}