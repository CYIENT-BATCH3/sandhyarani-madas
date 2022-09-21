#include<iostream>//input output operation
using namespace std;//every std function and literals variable are defined in std namespace

class mystudent//declaring student class
{
	char name[20];//creating class variable
	float sal;
public://open to all
	void read();	//creating public class fns
	void output();

};

void mystudent::read()	//fn defined outside the class for accessing values from user to the private variable of the class
{
	cout<<"enter the name: ";
	cin>>name;
	cout<<"enter the salary: ";
	cin>>sal;
}

void mystudent::output()//print the private variables of the class
{
	cout<<"name: "<<name<<endl;
	cout<<"salary: "<<sal;
}


int main()
{
	mystudent s1;	//create objecte of the class
	s1.read();	//revoking the fn of object
	s1.output();
}
