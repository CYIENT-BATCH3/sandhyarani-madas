//swap pointers using pass by reference
#include <stdio.h>
void swap(int *a,int*b);//function declaration
int main()
{
  
   printf("enter the two numbers ");//enter the numbers
   scanf("%d %d",&a,&b);//read the value
 printf("%d %d",a,b);//print origional values
 swap(&a,&b);//pass the address for swap the variables
  
 printf("%d %d",a,b);//print swapped values
}
//function declaration
void swap(int *a,int *b)
{
    
    int temp;//we have to take temparary variable for swap the values
 temp=*a;// a value assign to temp variable
*a=*b;//b value assign to a
*b=temp;//temp variable asiign to b
}
 