#include<iostream>//input and output operation
using namespace std;//every std function and literals variable are defined in std namespace
int main()
{
	int a,b;//declaring the variables
	setbuf(stdout,NULL);// for compiler purpose
	cout<<"enter two number"<<endl;
    cin>>a>>b;//reading input
    if(a>b)
    {
    cout<<"a is bigger"<<a;//print output
    }
    else
    cout<<"b is bigger"<<b;//print output


}
