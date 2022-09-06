/wap to pass pointer (of array) as a argument to the function
#include <stdio.h>
float a[]={1,2,3,4,5,6,7,8,9},n,sum=0,result;//declare the variables
float avg(float* a1,int n);//declare the funtcion(float  is for  total array,int n for total number of elements in array)

int main()
{
    
    result=avg(a,9);//function call
    printf("\n%f",result);//print result
    
}
float avg(float* a1,int n){//function defination
    float avg;//declare the float variable
    for(int k=0;k<n;k++){//for finding some of each element
    
        sum+=a1[k];
    }
    printf("\n%f",sum);
    avg = sum/n;//sum of elements/total no of elements
    return avg;//return avg
    
    }
    