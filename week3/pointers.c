//
#include <stdio.h>

int main()
{
   int*a,num1;//declaration
   
   
   a=&num1;//stores the address num1 to a
   *a = 34;//asign value to pointer variable
   printf(" \naddress of num1 is%u\n",a);//print address
   printf("\nvalue of num1=%d",*a);//print value
  
 float*b,num2=8;//declaration and initialization
 b=&num2;//stores the address num1 to b
 printf("\naddress of num2 is %u\n",b);//print address
 printf("\nvalue of num2=%f",*b);//print value
 }
   

