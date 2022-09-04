#include <stdio.h>

int main()
{
   int a[10],i,n;
   printf("enter the numbers");
   scanf("%d",&n);
   printf("enter the elements");
   for(i=0;i<=n;i++)
   scanf("%d",&a[i]);
   
   printf("the elements are as below");
   for(i=0;i<=n;i++)
   printf("%d",a[i]);
   

    return 0;
}




#include <stdio.h>

int main()
{
   int a[10],i,n;//declare the variable
   printf("enter the numbers");//input data rfom the user
   scanf("%d",&n);
   printf("enter the elements");
   for(i=0;i<=n;i++)//reading the values
   scanf("%d",&a[i]);
   
   printf("the elements are as below");
   for(i=0;i<=n;i++)//storing the values
   printf("%d",a[i]);
   

    return 0;
}



//sum of all natural numbers
#include <stdio.h>

int main()
{
  int x,n,i,sum=0;
  printf("enter the  values");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  sum=sum+i;
  printf("sum of all natural numbers = %d",sum);
   

    return 0;
}




  #include <stdio.h>

int main()
{
  int p1,i,num;
  printf("enter the plants  1.EC 2.HY  3.PU");//inputs
  scanf("%d",&p1);//taking input 
  
  if(p1==1){//comparing
      printf("enter the 6 digit  number\n");
      scanf("%d",&num);
      for(i=num;i<=num+20;i++)//for increment  6 digit value
      printf("\n1ECH41JXMN %d",i);
  }
  if(p1==2){//we are going to print 2
  printf("enter the 6 digit number\n");
  scanf("%d",&num);
  for(i=num;i<=num+20;i++)
  printf("\n1HYH41JXMN %d",i);
}
if(p1==3)
printf("enter the 6 digit number\n");
scanf("%d",&num);
 for(i=num;i<=num+20;i++)
  printf("\n1PUH41JXMN %d ",i);
  
 } 



   #include <stdio.h>

int main()
{
    int  b[]={1,2,3,4,5,6,7,8,9};
    char a[2]={'A','B','C','D','E','F','G','H'};
    for(int i=0;i<8;i++){
        printf("\n characters are: %c",a[i]);
    }
    for(int i=0;i<9;i++){
        printf("\n integers are:%d",b[i]);
    }
    return 0;
    
    }





#include <stdio.h>

int main()
{
  int a[4][3],i,j,m,n;//two dimension integer array syntax
  printf("enter the array elements");
  scanf("%d %d",&m,&n);
  printf("enter the array elements");
  for(i=0;i<m;i++){
  for(j=0;j<n;j++){
   scanf("%d",&a[i][j]);   
  }  
  }
  
  printf("the array elements are\n");
  for(i=0;i<m;i++){
      for(j=0;j<n;j++){
      printf("  %d  ",a[i][j]);
  
}
}

}





//vehicle
#include <stdio.h>

int main(){
    char a[17];
    printf("enter the string");//get the string from the user
    gets(a);
    
    if(a[10]=='E')//compare 10 th element E or not
    printf("EC");
   else if(a[10]=='H')//compare h
   printf("HY");
   else if(a[10]=='p')
   printf("PU");
}
 


//sum of matrics
#include<stdio.h>
int main(){
    int a[4][4],i,j,n,sum=0;
    printf("enter the elememts %d",16);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
    
    

printf("enter the values");
scanf("%d ",&a[i][j]);
sum=sum+a[i][j];
}
}
printf("   %d   ",sum);  
}





*sum of all the (4x4) matrix.
#include<stdio.h>
int main(){
    int a[4][4],i,j,n,sum=0;
    printf("enter the elememts %d",16);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
    
    

printf("enter the values");
scanf("%d ",&a[i][j]);
sum=sum+a[i][j];
}
}
printf("   %d   ",sum);  
}




***// scan and print the elements of multi demensional array 
#include<stdio.h>
int main(){
    int a[4][4][4],i,j,k;
    printf("enter the elememts %d",8);
  
    for(i=0;i<2;i++){// whole statement reading the values
    for(j=0;j<2;j++){
    for(k=0;k<2;k++){
scanf("%d ",&a[i][j][k]);//reading the value (or)taking the values
}}}
printf("elements\n");
 for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    for(k=0;k<2;k++){
    
printf("%d ",a[i][j][k]);
}
}
}
} 



//sum of diagonal elements
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
        if(i==j)//if i==j
        sum=sum+a[i][j];//for find the sum
}
}
printf("%d",sum);
}  




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
        if(i+j==4-1)//if 
        sum=sum+a[i][j];//for find the sum
}
}
printf("%d",sum);
}

    
