// WAP to find the square of number using macro
*algorithm 
*declaring the  macro function(perform multiplication operation)
*take input from the user  
 
   

#include<stdio.h>

#define square(a)  a*a					//macro function for the square of the number

int main()
{
	setbuf(stdout,NULL);			//for compiler 
	int num ;
	printf("\n enter the number : ");		//take user input
	scanf("%d",&num);
	printf("square = %d",square(num));			//call macro function and 
}