//passing array to function
#include<stdio.h>
void arr_fn(int,int);
void entire_arr(int a[]);
int main(){
    int arr[]={6,7,9,3,5};
    arr_fn(arr[0],arr[2]);//passing the array elements to function
    entire_arr(arr);//passing entire array as elements
    return 0;
}
void arr_fn(int x,int y)//funcion to find sum of array elements
{
    int sum;
    sum=x+y;
    printf("sum of two numbers from array %d\n",sum);
}
void entire_arr(int a[])//function  to find the entire sum of a array
int sum=0,size;
for(int i=0;i<=4;i++)
sum=sum+a[i];
printf("total sum=%d",sum);
}
}