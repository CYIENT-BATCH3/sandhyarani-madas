#include<stdio.h>
#include<string.h>
struct student {//declaring the structure
	int age;
	char name[67];
};

void details(struct student);//declaration of functions
int main(){
setbuf(stdout,NULL);
	struct student record;//structure variable
	record.age=16;
	strcpy(record.name,"sai");//cpy the name
	details(record);
	return 0;
}
void details(struct student record)//structure defination
{
	printf("age is %d\n",record.age);
	printf("name is %s\n",record.name);
}
