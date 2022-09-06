//wap to return pointer to the function
#include<stdio.h>
int *get();//it is a fn that return integer pointer
int main(){
    int *p;//declaration
    p=get();//calling the fn and address will get stored in p
    printf("%p\n",p);//print address
    printf("%d\n",*p);//print value
}
int *get()//define the fn
{
    static int a=10;//by uisng static variable the memory location should be fixed
    return(&a);//return to p
}
    

