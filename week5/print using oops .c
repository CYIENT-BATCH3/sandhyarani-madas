#include<iostream>//input output operation
	using namespace std;//every std function and literals  variable are defined in std namespace
	class my_std//declaring class
	{

		int x;//declaring data member
		int y;//declaring data member
	public://public access specifier(open to all)

		void input()
		{
			cout<<"enter value of x ";
			cin>>x;//reading input
			cout<<endl<<"enter value of y";
		    cin>>y;//reading input
		}
		void output()
				{
					cout<<endl<<"enter value of x "<<x;//printing the output
					cout<<endl<<"enter value of y "<<y;//printing the output
				}
	};
	int main()
	{
	my_std mu;//declaring object
	mu.input();//calling function
	mu.output();//calling function

	}