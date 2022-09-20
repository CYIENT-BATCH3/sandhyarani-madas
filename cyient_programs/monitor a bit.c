//wap to monitor the bit
*algorithm
*program to monitor the bit.
*in main declare the variable as i.
*taking for loop to increment the value from 1-10.
*if condition to check for 0th bit weather it is 1 or 0.
*if value is '1' flag is set else flag is not set.
*stop.
#include<stdio.h>
int main()
{
	setbuf(stdout,NULL);//for compailer
	int i =0;
	for(i=0;i<=10;i++)//loop increment from 0 to 10
	{
		if(i & 0x01)//check for 0th bit weather it is 1 or 0
			printf("\n%d = flag is set",i);	//if it is 1 print flag is set
		else
			printf("\n%d = flag is not set",i);//else print flag is not set
	}
}

