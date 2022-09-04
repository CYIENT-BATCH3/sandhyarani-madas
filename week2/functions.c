//sum of opposite diagonal elements
#include<stdio.h>
int main(){
    int a[15][15],i,j,sum=0;//till 15 we can give any element
    printf("enter the elements ");
    for(i=0;i<4;i++){//for row
    for(j=0;j<4;j++){//for column

scanf("%d",&a[i][j]);//reading the values
}}

for(i=0;i<4;i++){
    for(j=0;j<4;j++){//extracting the elements
        if(i-j==0||i-j==1)//if 
        sum=sum+a[i][j];//for find the sum
}
}
printf("%d",sum);
}




//function with no return and no argument value


#include<stdio.h>
void sum(){//name of the function for sum
int x=5,y=10;//declare the value
printf("sum is %d\n",x+y);
    
}
void sub(){//name of the function for sub
    int x=5,y=10;//local varibale
    printf("sub is %d\n",x-y);
}
void mul()//name of the function for mul
{
    int x=5,y=10;//local varibale
    printf("mul is %d\n",x*y);
}
void main(){
    sum();//calling function
    sub();//calling function
    mul();//calling function
}




//swape two  values with out using third variable

#include<stdio.h>
void main(){//name of the funcion
    int a=2,b=3;//local variable
     a=a+b;
    b=a-b;
    a=a-b;
    printf(" the swapped values are %d %d",a,b);
    
}



//swape two  values with using third variable

#include<stdio.h>
void main(){//name of the funcion
    int temp,a=2,b=3;//local variable
    temp=a;//temp it is a variable
    a=b;
    b=temp;
    printf(" the swapped values are %d %d",a,b);
    
}



//function with no return value and with arguments
#include <stdio.h>
void sum(int x,int y);
void main(){
    int a,b;//declaring the variable
    printf("enter the values\n");
    scanf("%d %d",&a,&b);//scan and store  the values
    sum(a,b);//calling function with arguments(actual arguments)
}
void sum(int x,int y){//declaration function
  printf("sum=%d",x+y); //find the sum (formal arguments)
}




//function with return value and with arguments

#include<stdio.h>
 int sum(int x,int y);//function with parameters
 int main(){
     int x,y,z; //declaring the variables
     printf("enter the values");
     scanf("%d %d",&x,&y);//store the values
    z= sum(x,y);//assigning the value retun from the function to a variable
    printf("%d",z);//print sum return value
 }
 int sum(int a,int b){//declaration with parametrs
     
     return (a+b);//return sum
 }




//function with return value and with arguments

#include<stdio.h>
 int sum(int x,int y,char u);//function with parameters
 int main(){
     int x,y,z; //declaring the variables
     printf("enter the values");
     scanf("%d %d",&x,&y);//store the values
    z= sum(2,3,'hello');//assigning the value retun from the function to a variable
    printf("%d",z);//print sum return value
 }
 int sum(int a,int b,char g){//declaration with parametrs
     
     return (a+b);//return sum
 }


//function with return value and with arguments

#include<stdio.h>
 int sum(int x,int y,char u);//declaration function with parameters
 int main(){
     int m,n,z; //declaring the variables
     printf("enter the values");
     scanf("%d %d",&m,&n);
     z=sum(m,n,'f');
     printf("%d",z);//calling function the values
    //assigning the value retun from the function to a variable
    //print sum return value
 }
 int sum(int x,int y,char u){//definition with parametrs
     
     printf("am i print here");
     return x+y ;//return sum
 }



//function with return type & with out parameter 

#include<stdio.h>
int sum();//function proto type
int main(){
    int c;//declare the variable
    c = sum();//calling the function
    printf("%d",c); //print the values
}
int sum(){

  int a=3,b=5,c;  //defining the vaiables  
 c=a+b;
return c;//return c values
}
 
 
 