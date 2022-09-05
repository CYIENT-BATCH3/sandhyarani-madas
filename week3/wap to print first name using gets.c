//wap to enter the first nameand last name using string and also check output for scanf and gets
#include <stdio.h>

int main()
{
  char  fname[7],lname[7];//declaring the string
  printf("enter the string");//taking user input
  gets(fname);
  gets(lname);//inputting the string
printf("%s %s ",fname,lname);//print the values
}
