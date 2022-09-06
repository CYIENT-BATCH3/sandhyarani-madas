// arithmetic operation only one pointer 
#include <stdio.h>

int main()
{
   int*a,num1=9;
  
   a=&num1;//pointer anstores the address of integer number
  
   printf("%d\n",*a);
   printf("%d\n",*a+1);
   printf("%d\n",*a+5);
}
   
  