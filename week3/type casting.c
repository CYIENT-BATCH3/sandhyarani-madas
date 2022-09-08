#include<stdio.h>
int main(){
    int a=2;
    float  b=30.78;
    char c='g';
    void *ptr;//declare void pointer
    ptr=&a;
    printf("\nafter typecasting 1st,a=%d",*(int *)ptr);//convert in to integer
    ptr=&b;
    printf("\nafter typecasting 2nd,b=%f",*(float *)ptr);//convert in to float
    ptr=&c;
    printf("\nafter typecasting 3rd,c=%c",*(char *)ptr);//convert in to character
}
    
  