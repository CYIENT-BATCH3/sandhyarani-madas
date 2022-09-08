//print the employe details using  array of structure
#include <stdio.h>

struct employe{//declare the structure
    int employe_id;//declare the variables
    char name[20];
    float salary;
    
};
int main(){
    struct employe k[16];//defining the array of structure
    int i,n;//declare the variables
    printf("enter the limit");
    scanf("%d",&n);
   
    for(i=0;i<n;i++)//store the employes
    {
    printf("\n enter the name");
    scanf("%s",k[i].name);
     printf("\n enter the employ_id");
    scanf("%d",&k[i].employe_id);//read the values
     printf("\n enter the salary");
    scanf("%f",&k[i].salary);
    }
    for(i=0;i<n;i++){
        printf("\n name=%s employ id=%d salary=%f",k[i].name,k[i].employe_id,k[i].salary);//print the values
    }
    }
    
