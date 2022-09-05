//concatinate the two strings with out using strcat


#include <stdio.h>

int main()
{
  char a[]="hlo";//initialize the array
  char b[]="god";//initialize the array
  char c[30];
  int i=0,j=0;
  while(a[i]!='\0'){//check the condition
      c[i]=a[i];//add string into another
      i++;//increment the value
  }
  while(b[j]!='\0'){//check the condition
      c[i]=b[j];//add string in to another
      if(c[i]=='\0')//check the condition
      break;
      i++;//increment the values
      j++;
  }
  printf("the string concatination is %s",c);//print the values
}