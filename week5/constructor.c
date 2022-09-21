//program using conctructors in oops


	#include<iostream>//input output operation
	using namespace std;//every std function and literals variables are defined in std namespace
	class constructor//creating class
	{
		string name;//declaring variable
		int age;//declaring variable
	public:
		constructor()//constructor fucntion
		{
			name="sai";//initialising data
			age =22;//initialising data
		}
		void display()
		{
			cout<<name<<endl;
			cout<<age<<endl;
		}

	};


	int main()
	{
		constructor obj;//creating object
		obj.display();//calling function
	}