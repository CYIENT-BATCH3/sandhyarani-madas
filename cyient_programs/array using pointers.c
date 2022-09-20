//write a c program to input elements in array and search an element in array using pointers

*algorithm
*input array elements 
*search the eleme in array using pointer
*return the position if it is found


#include<stdio.h>//including header file
int find_position(int *arr,int size,int array_element);//function declaration
int main()
{
  setbuf(stdout,NULL);//for printing the output in the console 
  int size,array_element,element_position;//declaring variable
  printf("enter the size of the array\n");
  scanf("%d",&size);
  int arr[size];//declaring integer array containing size elements
  printf("\nenter array elements\n");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);//reading array elements
  }

  printf("\nenter element to search ");
scanf("%d",&array_element);//reading element to search
  element_position=find_position(arr,size,array_element);//calling function 
  if(element_position==0)//checking if it  found or not found
   {
      
      printf("\n%d not found in array",array_element);//prints if it is not found
  }
  else
     printf("\n%d is found at array in %d position",array_element,element_position);//result if it is found
}


int find_position(int *arr,int size,int array_element)//defining function
{
    int flag=0;//reference bit

  for(int j=0;j<=size;j++)
     {
        if(*(arr+j)==array_element)//checking if the element is in the array
        {
            flag=1;//reference bit is set to 1  if it is found
        	return j;//returning j value to main
        	
        }
        
     }
     if(flag==0)
     {
         return flag;//return 0 if it is not found in array
     }

