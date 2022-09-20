//WAP to input elements in array and sort array elements in ascending and descending order?


*Algorithm

*program to find ascending and descending in array using sorting method.
*using pass b reference concept which pass the array to functions.
*declare function as sort asecnding and descending in global.
*in main function declare the array with size of 20.
*read and print the size of array.
*now call functions to defing function.
*in defining function take two for loops for iterartion.
*taking if condition that if a[i]>a[j] then store a[j] in temporary variable,a[i]=a[j],a[i]=temp.
*then we will get ascending order in array.
*similarly for descending order but take a[i]<a[j] we will get desecnding order.


#include<stdio.h>
void sort_array_ascending(int *,int); //function declaration
void sort_array_descending(int *,int);
int main()
{
	setbuf(stdout,NULL);
	int a[35],size;	//array declaration

	printf("\nenter the array size:  ");//take user input for size
	scanf("%d",&size);

	printf("\nplease enter the %d elements: \n",size);//scan the array elements from the user
	for(int i=0;i<size;i++)
	{
		printf("\n%d element : ",i);
		scanf("%d",&a[i]);
	}


	sort_array_ascending(&a,size);//function call for the sort array
	sort_array_descending(&a,size);
}
	void sort_array_ascending(int  *array,int size)	//function defination  for the sorting function
	{
		int temp;
		for(int i=0;i<size;i++)	//loop for taking the firsv value for comparison
		{
			for(int j = i;j<size;j++)//loop for taking second value from i to limit
			{
				if(array[i]>array[j])//compare the values in i,j index
				{
					temp = array[j];//if it is bigger then swap the values using temp variable
					array[j]= array[i];
					array[i]= temp;
				}
			}
		}
		printf("\nsorted array in ascending :");//print the sorted array
		for(int i=0;i<size;i++)
		{
			printf(" %d ",array[i]);
		}
	}



	void sort_array_descending(int  *array,int size)//function defination  for the sorting function
		{
			int temp;
			for(int i=0;i<size;i++)//loop for taking the firstv value for comparison
			{
				for(int j = i;j<size;j++)//loop for taking second value from i to limit
				{
					if(array[i]<array[j])//compare the values in i,j index
					{
						temp = array[j];//if it is bigger then swap the values using temp variable
						array[j]= array[i];
						array[i]= temp;
					}
				}
			}
			printf("\nsorted array in descending : ");//print the sorted array
			for(int i=0;i<size;i++)
			{
				printf(" %d ",array[i]);
			}
		}