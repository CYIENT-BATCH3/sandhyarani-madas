//write a program in c to count the total number of alphabet ,numerics,special characters
#include<stdio.h>
#include<string.h>
int main(){
  char sai[20];
  int alpha=0,spec=0,num=0;
  printf("enter the string: ");//taking input from the user
  gets(sai);
  for(int i=0;i<strlen(sai);i++){//taking each character from the string
      if(sai[i]>=65 &&sai[i]<=90||sai[i]>=97 &&sai[i]<=122)//comparing ascii values A-Z and a_z
      alpha++;
      if(sai[i]>=48 &&sai[i]<=57) //comparing neumwrical values
      num++;
     // if(sai[i]>32 && sai[i]<=47||sai[i]>=58 && sai[i]<=64||sai[i]>=94 &&sai[i]<=7)
      //comparing the special character
      else
      spec++;
      
  }
    printf("alphabet %d\n",alpha);
      printf("numbers%d\n",num);
      printf("special character%d\n",spec);  
  }
  
  