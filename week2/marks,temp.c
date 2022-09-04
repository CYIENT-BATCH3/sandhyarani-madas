*print  the values  using printf and scanf.
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the three  values:");
scanf("%d %d %d",&a,&b,&c);
printf("%d\n %d\n %d\n",a,b,c);
return 0;
}


*calculae  marks using if and else condition.
#include <stdio.h>
int main()
{
    int m;
 printf("enter the marks\n");
 scanf("%d",&m);
 if(m>=75 && m<100)
 printf("distinction");
 else if(m>=60 && m<70)
 printf("first class");
 else if(m>=50 && m<60)
 printf("second class");
 else if(m>=40 && m<50)
 printf("pass marks");
 else if(m<=35 && m<40)
 printf("fail");
}


*find given number is even or odd by using if and else condition.
#include <stdio.h>

int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
if(a%2==0)
printf(" a is even\n");
else
printf(" a is odd\n");
}



*wap for temparature using if anf elseif condition.
#include <stdio.h>

int main()
{
int temp;
printf("enter the temparature");
scanf("%d",&temp);
if(temp<0)
printf("freezing whether");
else if(temp>=0 && temp<=10)
printf("very cold whether");
else if(temp>=10 && temp<=20)
printf("cold whether");
else if(temp>=20 && temp<=30)
printf("normal in temp");
else if(temp>=30 && temp<=40)
printf("hot");
else if(temp>=40 && temp<=30)
printf("very hot");
}




*wap to print operators using switch statement.
#include <stdio.h>

int main()
{
float a,b;
char ch;
printf("enter the operand  values");
scanf("%f%f",&a,&b);
printf("enter the character values");
scanf(" %c",&ch);
switch(ch){
    case '+':
    printf("%f+%f=%f",a,b,a+b);
    
    break;
    case '-':
    printf("%f-%f=%f",a,b,a-b);
    break;
    case '*':
    printf("%f*%f=%f",a,b,a*b);
    break;
    case '/':
    printf("%f/%f=%f",a,b,a/b);
    break;
    default:
    printf("invalid operator");

}
    


    
