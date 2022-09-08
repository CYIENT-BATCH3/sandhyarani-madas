//print the size of union,and structure
#include <stdio.h>

union employe_u{//declare the union
    int employe_id;//declare the union variables
    char name[20];
    float salary;
  
    
} employe_v;//name of union
struct employe_s{//declare the structure 
    int employe_id;//declare the structure variables
    char name[15];
    float salary;
    
}employe_g;//name of structure
int main(){
   printf("size of unoin=%lu bytes",sizeof(employe_v));
    printf("size of structure=%lu bytes",sizeof(employe_g));
}