//print the employe details using union
#include <stdio.h>

union employe{//declare the union
    int employe_id;//declare the variables
    char name[20];
    float salary;
    long int contact;
    
};
int main(){
    union employe k[16];//defining the array of union
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
     printf("\n enter the contact");
    scanf("%ld",&k[i].contact);
    
    }
    for(i=0;i<n;i++){
        printf("\n name=%s employ id=%d salary=%f contact=%ld",k[i].name,k[i].employe_id,k[i].salary,k[i].contact);//print the values
    }
    }
    
