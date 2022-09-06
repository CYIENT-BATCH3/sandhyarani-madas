//wap to return multiple values
#include <stdio.h>
void result(int *a,int*b,int *c,int *d);//function declaration
int main()
{
    int *x,*y,*z,*r;//declare the  pointer variables
    printf("enter the values");
    scanf("%d %d %d %d",&x,&y,&z,&r);//read the values
    result(&x,&y,&z,&r);//function call with address
}
void result(int *a,int *b,int *c,int *d){
    printf("\nreceived all the values are");
    printf("\n%d %d %d %d",*a,*b,*c,*d);//print the values
}
  
