//length of string using str

#include<stdio.h>
int main(){
    int i=0;//declare the variables 
  char  str[15];//declare the character array
    printf("enter the string  ");
    gets(str);//take input from the user
    i=strlen(str);//assigning length of the string to i
    printf("%d",i);//print sum
}
    
