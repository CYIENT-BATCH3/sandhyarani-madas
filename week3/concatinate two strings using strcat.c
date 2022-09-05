//write a program to concatinate the two strings using strcat
#include <stdio.h>

int main()
{
   char str1 [20];//declare the variable str1
   char str2[20];//declare the variable str2
   
   int i=0,j=0;//delare the variable i,j
  // printf("enter the  string1   ");
gets(str1);//taking input from the user
  // printf("enter the  string2    ");
  
  gets(str2);
   printf("concatinate the two strings %s",strcat(str1,str2));//concatinate(adding) the strings
}