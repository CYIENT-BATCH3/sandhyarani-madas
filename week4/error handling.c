//error handling

#include<stdio.h>
int main(){
FILE *fptr;//declaring ifle

fptr=fopen("hello.txt","r");//open the file in read mode
if(fptr == NULL)
	printf("error occured");//check for error
putc('T',fptr);//try to write  to file
if(ferror(fptr)!=0)
	printf("error occured");//check for error
fclose(fp);//file close
return 0;

}
