//write a program to print and read the information about library(books)
#include <stdio.h>

struct book{//declare the structure
    int bookno;
    char bookname[89] ;
    char authorname[56];
    char subject[67];
}e;


void main(){
    //struct book;
    struct book e={12,"my life","sandhya","physics"};//defining the variables

    struct book *ptr;//create a pointer avriable
    ptr=&e;//pointer values stored in variable e
        
    printf("%d\n %s\n %s\n %s\n",ptr->bookno, ptr->bookname,ptr->authorname,ptr->subject);
}

