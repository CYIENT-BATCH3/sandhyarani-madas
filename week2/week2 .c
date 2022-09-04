


*wap to print the sum of 4 digit number  using while loop.

#include <stdio.h>

int main()
{
   int num,rem,sum=0;
  printf("enter the numbers");
  scanf("%d",&num);
  while(num>0){
      rem=num%10;
      sum=sum+rem;
      num=num/10;
  }
  printf("sum of numbers is %d",sum);
  }



*wap to print even number 1 to 10 using  the while loop.
#include <stdio.h>

int main()
{
    int i=0,n;
    printf("enter the numbers");
    scanf("%d",&n);
while(i<=n){
   if (i%2==0)
   printf("\n%d EVEN",i);
   
   i++;
    
} 
}


*wap to print odd number 1 to 10 using while loop.
#include <stdio.h>

int main()
{
    int i=0,n;
    printf("enter the numbers");
    scanf("%d",&n);
while(i<=n){
   if (i%2!=0)
   printf("\n%d odd",i);
   
   i=i+1;
    
} 
}





#include <stdio.h>

int main()
{
    int i=0,n;
    printf("enter the numbers");
    scanf("%d",&n);
while(i<=n){
    
   if(n%1==0)
   printf("%d\n",i);
   
   i=i+1;
    
} 
}


*wap to print factorial number using while loop.
#include <stdio.h>

int main()
{
    int n,fact=1,i=1;
    printf("enter the number");
    scanf(" %d",&n);
   
while(n>=1){
    
fact=fact*n;
    n--;
    
}
    printf("factorial of a number %d",fact);

} 


*wap to print prime numbers.
#include <stdio.h>

int main()
{
    int i=1,n,c=0;
    printf("enter the numbers");
    scanf("%d",&n);
   
while(i<=n){
    if(n%i==0)
        c++;
   // print n
    
    i++;
}
if(c==2)
    printf(" is prime  %d\n",n);
    else
    printf("is not a prime %d\n",n);

} 



*wap to print 8 th table.
#include <stdio.h>

int main()
{
   int n;
   for(n=1;n<=100;n++){
       if(n%8==0)
       printf("%d ",n);
   }

   
}


*wap to print natural numbers using for loop .
#include<stdio.h>
int main(){
int n,i;
printf("enter the numbers:");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("%d\n",i);
}
return 0;
}


*wap using break
#include<stdio.h>
int main(){
int n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<=n;i++){
if(i==1)
break;
printf("%d",i);
}
return 0;
}





