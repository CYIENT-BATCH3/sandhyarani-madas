//write a program in c to count the total number of alphabet (or) words in a string
#include<stdio.h>
#include<string.h>
int main(){
   char a[27]="sunset is west";
   int i=0,count=1;
   char b =' ';
   while(a[i]!='\0'){
       if(a[i]==b){
       count ++;
   }
   i++;
   
   }
   printf("%d\n",count);
   }
   
 