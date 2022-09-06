//find the remainder and quotient using pointers
#include<stdio.h>
void result(int ,int ,int * ,int *);//declare the function
int main(){
    int a=10, b=8,rem,quo;//declare the variable
    result(a,b,&rem,&quo);//calling the function
    printf("%d %d %d %d",a,b,rem,quo);//print values
}
void result(int x,int y,int *g,int *t)//defining the variables
{
*g=x/y;//gets quotient and asign to address of a
*t=x%y;//gets remainder and asign to address of b
}