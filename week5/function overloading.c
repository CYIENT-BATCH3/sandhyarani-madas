#include<iostream>//input output operation
using namespace std;//every std function and literals are defined in std namespace
class area//declaring class
{
public:
	void function(int rad)//defining function 
	{
		cout<<"area of the circle "<<3.14*rad*rad<<endl;//finding area 
	}
	void function(int len,int br)//defining function 
		{
		cout<<"area of the rectangle "<<len*br<<endl;//finding area 
		}
	void function(double hei,int b)//defining function 
	{
		cout<<"area of the triangle "<<(b*hei)/2<<endl;//finding area 
	}
};
int main()
{
area obj;//creating object obj
obj.function(5);//function overloading
obj.function(5,10);//function overloading
obj.function(5.4,3);//function overloading
}

