//length of string without using str

#include<stdio.h>
int main(){
    int i=0,count=0;//declare the variables 
  char str[15];//declare the character array
    printf("enter the string  ");
    gets(str);//take input from the user
    while(str[i]!='\0'){
        count++;
        i++;
    }
    
 
    printf("%d",i);//print sum
}
    
