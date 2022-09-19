/* wAP to read contents into file and save it and close it.(this pgm will print the source code of the program)
 * file_read.c
 *
 * start
 * open a file in read mode
 * read the content to the file
 * close the file
 

#include<stdio.h>
#include<stdlib.h>

int main()
{   char ch;
	FILE *fptr;												//declare file pointer
	fptr = fopen(__FILE__,"r");						//open the file in read mode and assign it into fptr __file__ - macro for the path for the source cod of pgm
	if(fptr == NULL)										//check the opening of file is succesfull or not
		{
			printf("error in opening file");				//print error and exit from the pgm
			exit(1);
		}
	do														//print all the charaters inside the file using do while loop
	{
		ch = fgetc(fptr);
		printf("%c",ch);

	}while(ch != EOF);										//loop iterate until the character reaches EOF
	printf("succsess");
	fclose(fptr);											//close the file

}
