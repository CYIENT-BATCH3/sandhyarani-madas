//Write a program to find factorial of number in c++


#include<iostream>//input output operation
using namespace std;//every std function and literals variables are defined in std namespace
int main()
{
	int num,fact=1;//declaring variable

	cout<<"enter the number"<<endl;
    cin>>num;//reading input
    cout<<"factorialof  numbers is ";
    for(int i=1;i<=num;i++)
    {
    	fact=fact*i;//finding factorial
    }
    cout<<fact;//printning the output
}