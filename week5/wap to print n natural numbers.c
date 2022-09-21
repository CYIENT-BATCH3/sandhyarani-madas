//WAP  to print n natural numbers from 1 to n


#include<iostream>//including header file
using namespace std;//every std function and literals variable  are defined in std namespace
int main()
{
	int num,i=1;//declaring variable

	cout<<"enter the number"<<endl;
    cin>>num;//reading input
    cout<<"natural numbers are ";
   do
   {
	   cout<<i<<"\t";//printing  i
	   i++;//increment i value

   }while(i<=num);//check upto i
}