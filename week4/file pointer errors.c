//file pointer errors 

#include<stdio.h>
int main(){


FILE *file=NULL;//declaring the file pointer
//opening an empty text file in write only mode
file=fopen("textFile.txt","W");
//it will causes  an i/o error trying to write on it
fprintf(file,"%s","HELLO");
if(ferror(file))
{
perror("Error:writing in a read only file\n");
	clearerr(file);//clearing error
}
fclose(file);
return (0);
}

