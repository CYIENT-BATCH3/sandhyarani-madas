#include <stdio.h>

int main()
{
    int a=10,b=24,c=76;//initialisation
    int*p1,**p2,***p3;//declaration
   
    p1=&a;
    p2=&p1;
    p3=&p2;
    printf("%d\n",a);//value of a variable
    printf("%d\n",*p1);//value of a
    printf("%p\n",p1);//address of 1000
    printf("%p\n",*p2);//address of p1
    printf("%p\n",p2);//address of 1000
    printf("%p\n",*p3);
    printf("%p\n",p3);
    

    return 0;
}
