//macros squart

#include<stdio.h>

#define SQUARE(x) (x*x)//define the macro
int main(){
	setbuf(stdout,NULL);
	int num;
	printf("enter the number");
	scanf("%d",&num);//read the number
	printf(" square=%d\n",SQUARE(num));

}
