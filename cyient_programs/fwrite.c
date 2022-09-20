// wAP to write contents into file and save it and close it.
 
 
 * start
 * open a file in write mode
 * write the content to the file
 * close the file
 

#include<stdio.h>

int main()
{
	char ch[35] = " hello goodmorning ?\n goodmorning ";		//string buffer for writing into the file
	FILE *fptr;												//declare file pointer
	fptr = fopen("randomtext.txt","w");						//open the file in write mode and assighn it into fptr
	if(fptr == NULL)										//check the opening of file is succesfull or not
		{
			printf("error in opening file");				//print error and exit from the pgm
			exit(1);
		}
	fprintf(fptr,"%s",ch);									//write the string buffer into the file
	printf("succsess");
	fclose(fptr);											//close the file

}

