//pragma 

#include<stdio.h>
#pragma pack(2);//direct the compiler to pack the memory to save memory from structure padding
struct x{//create a structure with  different data types


	int a;
	char b;
	float c;

}s1;
int main(){
	printf("%d\n",sizeof(s1));//print the size of structure elements
}
