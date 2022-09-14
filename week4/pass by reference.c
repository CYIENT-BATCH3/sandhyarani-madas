//pass by refence

#include<stdio.h>
#include<string.h>
struct student//declaring the structure
{
	int id;
	char name[26];
	float percent;

};
void func(struct student *rec);//declaring the function
int main(){
	struct student record;//declaring the structure variable
	record.id=1;
	strcpy(record.name,"sai");//copy the  name using strpcpy
	record.percent=45.8;
	func(&record);//calling the function
	return 0;
}
void func(struct student *rec)//defining the function
{
	printf("id is:%d\n",rec->id);//print id
	printf("name is:%s\n",rec->name);//print name
	printf("percent:%f\n",rec->percent);//print percent
}
