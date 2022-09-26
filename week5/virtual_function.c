#include<iostream>//input output operation
using namespace std;//every std function and literals variables are deined in std namespace
class a//declaring base class
{
public:
	virtual void function()//defining virtual function
	{
		cout<<"hello world base"<<endl;
	}


};
class b:public a//creating child class
{
public:
 void function()
	{
		cout<<"hiii"<<endl;
	}
};
int main()
{
b dr;//creating object for base class
a &bs =dr;//assigning the address of sub to base class
bs.function();//calling function
dr.function();//calling function
}
