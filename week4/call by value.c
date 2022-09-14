//WAP to print the call by value.
#include<stdio.h>
#include<string.h>
struct student//declaring the function
{
	int id;
	char name[20];
	float percent;
};
void func(struct student rec);//function call
int main()
{
	struct student record;
	record.id=1;
	strcpy(record.name,"sandhya");
	record.percent=82.5;
	func(record);
	return 0;
}
void func(struct student rec)//function definition
{
	printf("Id is :%d\n",rec.id);
	printf("Name is:%s\n",rec.name);
	printf("Percent:%f\n",rec.percent);
}