//write a c program using function pointers 1)add function 2)sub function

*algorithm
*start
*declare variables
*call the functions using function pointer
*print add,sub using 
 
#include<stdio.h>
int operation(int (*fun)(int ,int),int a,int b);//declaring function prototype
int add(int a,int b);//declaring function prototype
int sub(int a,int b);//declaring function prototype

int main()
{
setbuf(stdout,NULL);//printing the contents in the console
int res,res_sub;//declaring variable
res=operation(add,10,3);//calling the function
printf("\nresult after addition  %d",res);
res_sub=operation(sub,10,3);//calling the function
printf("\nresult after substraction  %d",res_sub);
}
int operation(int (*fun)(int ,int),int a,int b)//defining function 
{
   return fun(a,b);
}
int add(int a,int b)//defining function
{
   return a+b;
}
int sub(int a,int b)//defining function
{
   return a-b;
}
