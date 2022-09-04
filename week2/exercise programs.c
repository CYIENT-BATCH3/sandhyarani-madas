*wap to check the given number is armstrong or not
#include<stdio.h>
int main(){
int num=153,temp=num;
int i,count=0,x=1,sum=0;
while(num>0){
count++;
num=num/10;
}
num=temp;
while(num>0){
for(i=0;i<count;i++){
x=x*(num%10);
}
sum=sum+x;
x=1;
num=num/10;
}
if(sum==temp)
printf("the number is armstrong");
else
printf("the number is not armstrong");
}


*wap to print fibanacci series
#include<stdio.h>
int fib(int n){
if(n==0)
return 0;
else if(n==1)
return 1;
else
return fib(n-1)+fib(n-2);
}
void main(){
int i;
for(i=1;i<20;i++){
}
printf("%d",fib(6));
}




*wap to check the given number is  pallindrome or not
#include<stdio.h>
void main(){
int num=1221;
int temp=num;
int sum=0;
while(temp>0){
sum=sum*10+temp%10;
temp=temp\10;
}
if(sum==num){
printf("the number is palindrome");
}
else{
printf("the number is not palindrome");
}
}