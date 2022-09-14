#include<stdio.h>
struct date{//declaring the date structure
	 unsigned int d:5;
	unsigned int m:4;
	 unsigned int y;
};
int main(){
	printf("size of date is %u bytes\n",sizeof(struct date));//print sizeof date
	struct date dt={31,12,2014};//assigning values to each element
	printf("Date is %d/%d/%d",dt.d,dt.m,dt.y);
	return 0;
}
