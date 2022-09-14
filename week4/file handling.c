//wap to open the file in read mode and print the contents of a file


#include<stdio.h>
int main(){
	FILE *fp=NULL;//file pointer declaration
	char ch;//character to read every character from files
	fp=fopen("C:\\Users\\sm69915\\Documents\\hello god.txt","r");//open the file and give to file pointer
	if(fp==NULL){//check whether file is exit or not
		printf("file not found");
		exit(1);
	}
	while(!feof(fp))//read the character until file is reached
{
		ch=fgetc(fp);//read the each and every character
printf("%c",ch);
}
	fclose(fp);//close the file
}
