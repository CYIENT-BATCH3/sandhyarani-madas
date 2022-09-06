//increase the pointer address add any value
#include <stdio.h>

int main()
{
   int*a,num1=9;//declaring a integer pointer
  
   a=&num1;
  //pointer stores the address of integer number
  float*b,num2=7;//declaring a float pointer
  b=&num2;//pointer stores the address of float
   printf(" %p ",a);
   printf(" %p ",a+2);//increase the address by adding any value
   printf(" %p",a+5);

   printf(" %p",b);
   
  printf(" %p",b+2);
  printf(" %p",b+3);
  }