//write a program to find area of cone,circle,cylinder
#include<stdio.h>
#include<math.h>
#define PI 3.14//defining values using macros
int main(){
	setbuf(stdout,NULL);//
	float radius,ht;
	printf("\nenter the radius");//input the radius
	scanf("%f",&radius);
	printf("\nheight");//input the height
	scanf("%f",&ht);
	printf("area of circle=%f",(PI *radius*radius));//area of circle
	printf("area of cone=%f",(PI *radius*(radius+sqrt(ht*ht+radius*radius))));//area of cone
	printf("area of cylinder=%f",2*PI*radius*(radius+ht));//area of cylinder
return 0;
}
