//swap pointers using functions
#include <stdio.h>
void swap(int,int);//function declaration
int main()
{
  //function call
  swap(8,3);
  return 0;
}
//function declaration
void swap(int a,int b)
{
    int temp;//we have to take temparary variable
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    
}