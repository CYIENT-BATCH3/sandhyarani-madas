#include<iostream>//input output operation
using namespace std;//every std function and literals variables are defined in std namespace

class myclass	//declaration of class
{
	int num1;

public:
	myclass(int a)	//constructor defnition
	{
		num1 = a;
	}
	void print()	//print the private varible of the class
	{
		cout<<" "<<num1;
	}
};
int main(){
	myclass obj(100);	//creating object by passing 100 as argument
	obj.print();	//calling function defined inside class

}



