//wap to print sum of 4 digits


include<iostream>//input output operation
using namespace std;//every std function and literals varaiable are defined  std namespace
int main() {
	int num1,sum = 0;//variable declaration
	cout<<"enter number"<<endl;//accept data from user
	cin>>num1;
	if(num1>999 && num1<10000)
	{
		while(num1 !=0)	//iterate until num is 0
		{
			sum = sum + (num1%10);//find the sum of the digit
			num1 = num1/10;//remove the last digit
		}
		cout<<"sum = "<<sum;
	}
	else
		printf("number is not 4 digit ");
}



