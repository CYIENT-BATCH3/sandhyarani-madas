//Wap  to check the character is vowel or not


#include<iostream>//input output operation
using namespace std;//every std function and literals variables defined in std namespace
int main()
{
	char ch;;//declaring variable

	cout<<"enter the character"<<endl;
    cin>>ch;//reading input
    if(ch =='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch =='A'+32|| ch=='E'+32||ch=='I'+32||ch=='O'+32||ch=='U'+32)//condition for checking vowel
    {
    	cout<<"it is vowel";
    }
    else
    	cout<<"it is not a vowel";


}
