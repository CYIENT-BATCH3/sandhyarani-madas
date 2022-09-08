//print the employe details using structure
#include <stdio.h>

struct employe{//declare the structure
    int employe_id;//declare the variables
    char name[20];
    float salary;
    
};
int main(){
    struct employe g;//declare the structure with variables
    printf("enter the name");
    scanf("%s",g.name);//read the name
    printf("enter the employ_id");
    scanf("%d",&g.employe_id);
    printf("enter the salary");
    scanf("%f",&g.salary);
    printf("enter the name %s\n enter the employ_id %d\n enter the salary %f\n",g.name ,g.salary,g.employe_id);//print all the employ details
}