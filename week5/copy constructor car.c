//program using copy  conctructor in oops 


	#include<iostream>//input output operation
	using namespace std;//every std function and literals variable are defined in std namespace
	class car//creating class   car is the name of class
	{
		string colour;//declaring variable
		int size;//declaring variable
	public:
		car(string col,int a)//constructor function
		{
			cout<<"my chasis"<<endl;
		colour=col;//initialising data
		size=a;
		}
		car(const car &chas)//copy constructor function defining
				{
			cout<<"my door"<<endl;
				colour=chas.colour;//initialising data from previous object
				size=chas.size;//initialising data from previous object
				}
		void display()
		{

			cout<<"colour :"<<colour<<endl;
		}

	};


	int main()
	{
		car chasis("blue",99);//creating object using  parameterised constructor
		chasis.display();//calling function
		car door(chasis);//creating object using copy constructor
		door.display();//calling function
	}


	