#include<iostream>//input output operation
using namespace std;//every std function and literals variable are defined in std namespace

class myclass//declaration of class
{
	int num1;

public:
	void assighn(int n1)//public function to assighn values to private variable of the fne
	{
		num1 = n1;

	}
	void print()//print the private varible of the class
	{
		cout<<" "<<num1;
	}
};
int main()
{
	myclass obj1[10];//creating class object of array

	for(int i =0;i<=10;i++) obj1[i].assighn(i);//10 times going assighn valkues to different object
	for(int i =0;i<=10;i++) obj1[i].print();//10times print the elements 


}

