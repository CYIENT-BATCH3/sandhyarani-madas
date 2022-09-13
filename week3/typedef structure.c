//wap to initialize the use of typedef structure
#include<stdio.h>
 typedef struct point{//typedef for structure
	int age;
	float fees;

} point;// name of the variable
int main(){

	point p1;//declaring a variable
	p1.age=1;//initialize the values
	p1.fees=4;
	printf("%d\n",p1.age);//print age
	printf("%f\n",p1.fees);//print fees
}
