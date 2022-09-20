//wap to set a bit with return type
*algorithm
 
 * program to find setting a particular bit.
 * using pass by value concept for set value.
 * declare the function at global as set_bit
 * read the number and position from the user.
 * call function to define function.
 * in define function perform BIT OR operation to set a bit.
 * it will prints after setting the value
 
#include<stdio.h>
void set_bit();//function declaration
void main()
{
	setbuf(stdout,NULL);
	int number,position;
	printf("enter the number\n");//reading the variable
	scanf("%d",&number);
	printf("enter the position\n");
	scanf("%d",&position);
	set_bit(number,position);//calling function;
}
void set_bit(int number,int position)   //function defination
{
	number = number |(1<<position);
	printf("after a setting a bit:%d",number);  //prints the setting value
}