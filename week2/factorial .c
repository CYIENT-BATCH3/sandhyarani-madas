//factorial of a given number

#include <stdio.h>
int fact(int num){

   if (num==0)
   return 1;
   else
   return num*fact(num-1);
   }
   void main(){
       printf("%d",fact(5));
   }



//wap to count number of digits in a given number
#include <stdio.h>
 int noofdigits(int n1);
 int ctr=0;
 int main()
{
    int n1,ctr;
    printf("\n\n count the digits of a given number:\n");
    printf("input a number:");
    scanf("%d",&n1);
    ctr=noofdigits(n1);
    printf("number of digits in the number is:%d \n \n",ctr);
    return 0;
}
int noofdigits(int n1)
if(n1!=0){
    ctr++;
    noofdigits(n1/10);
    
}
return ctr;
}

   
   
   
