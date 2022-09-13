
//program using  conditional compilation stages
#include<stdio.h>

#define a//define the preprocessor
void main(){
#ifdef a
	printf("\n hello iam here..");//if certain macro is defined to do certain task
#endif
#ifndef a//if not defined
	printf("\n not defined");
#else
	printf("\n r u there");
#endif
}
