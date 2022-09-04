




*  wap to input data from user using scanf() and display various format specifiers using printf().
   
#include<stdio.h>
int main(){
int num;
char ch;
float temp;
printf("enter the number\n");
scanf("%d",&num);
printf("enter the character\n");
scanf("%c",&ch);
printf("enter the temparature\n");
scanf("%f",&temp);
printf("%d\n%c\n%f\n",num,ch,temp);
return 0;
}


*wap that prints the storage space taken by a float type and its range values

#include<stdio.h>
#include<float.h>
int main(){
float floattype;
printf("storage space for float=%zu",sizeof(floattype));
return 0;
}


*wap that uses atleast 5 keywords in c and print some output using the same

#include<stdio.h>
int main(){
int student_id;
char name='s';
float temp=24;
printf("enter the student_id");
scanf("%d",&student_id);
printf("enter character is%c\n tempareture=%f\n student_id=%d",name,temp,student_id);
return 0;
}


*wap to input 10 characters and find its ASCII value

#include <stdio.h>

int main()
{
   int a='S';
   int b='A';
   int c='N';
   int d='D';
   int e='H';
   int f='Y';
   int g='R';
   int h='I';
   int i='N';
   int j='P';
   printf(" ascii values are %d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);
 
}




*write a program to input a value in decimal,octal and hexadecimal values in a character value using scanf()

#include<stdio.h>
int main(){
unsigned char val1;
unsigned char val2;
unsigned char val3;
printf("enter the decimal number");
scanf("%f",&val1);
printf("enter the octal number");
scanf("%o",&val2);
printf("enter the hexadecimal number");
scanf("%x",&val3);
printf("decimal value:%f\n octal:o\n hexadecimal value:%x\n",val1,val2,val3);
return 0;
}


*wap to input a hexadecimal value using scanfin c
#include<stdio.h>
int main(){
unsigned int num;
printf("enter the hexadecimal number");
scanf("%x",&num);
printf("hexadecimal value:%x",num);
return 0;
}


*wap to input 5 integers values

#include<stdio.h>
int main(){
iny num1,num2,num3,num4,num5;
char ch1;
char ch2;
char ch3;
float val1,val2,val3,val4;
printf("enter the integer numbers");
scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
printf("enter the characters");
scanf("%s",&ch1);
printf("enter the characters");
scanf("%s",&ch1);
printf("enter the characters");
scanf("%s",&ch2);
printf("enter the characters");
scanf("%s",&ch3);
printf("enter the float values");
scanf("%f%f%f%f",&val1,&val2,&val3,&val4");
printf("integer values are%d\n%d\n%d\n%d\n%d\n",num1,num2,num3,num4,num5);
printf("characters are:%c\n%c\n%c\n",ch1,ch2,ch3);
printf("float values are:%f\n%f\n%f\n%f\n",val1,val2,val3,val4);
int sum1=num1+num2+num3+num4+num5;
float sum2=val1+val2+val3+val4;
int float _sum3=val1+val2+val3+val4;
float devide value=sum1/sum2;
printf("float sum of float values=%f\n int sum of float values=%d\n",sum2,float_sum3);
printf("sum of integers=%d\n",sum1);
printf("divide value =%f",divide value);
return 0;
}

*write a program to get thesize of various  data types using different constant definedin limits.h header file.

#include<stdio.h>
int main(){
 
printf("the size of short int :%ld bytes\n",sizeof(short int));
printf("the size of unsigned short int :%ld bytes\n",sizeof(unsigned short int));
printf("the size of unsigned int :%ld bytes\n",sizeof(unsigned int));
printf("the size of  int :%ld bytes\n",sizeof( int));
printf("the size of  long int :%ld bytes\n",sizeof(long int));
printf("the size of  unsigned long int :%ld bytes\n",sizeof( unsigned long int));
printf("the size of  long long int :%ld bytes\n",sizeof(long long  int));
printf("the size of  unsigned long long int :%ld bytes\n",sizeof( unsigned long long int));
printf("the size of  signed char:%ld byte\n",sizeof( signed char));
printf("the size of  unsigned char:%ld byte\n",sizeof( unsigned char));
printf("the size of char:%ld byte\n",sizeof(char));
printf("the size of  float:%ld bytes\n",sizeof( float));
printf("the size of double:%ld bytes\n",sizeof( double));
printf("the size of  long double:%ld bytes\n",sizeof( long double));
return 0;
}










































































