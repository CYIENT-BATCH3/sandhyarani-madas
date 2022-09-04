
*enums


#include,stdio.h>
  enum lcd{clear=0x01,display=0x08,first_line=0x80,cursor=0x02};
    int main(){
    printf("force cursor to beginning of 1st row %x\n",first_line);
    printf("coursor on %x\n",cursor);
    printf("display the fun %x\n",display);
    printf(" clear the display %x\n",clear);
}

*employee details using union
#include <stdio.h>

 union person{
   
    int employeeid;
    char employeename[20];
    char employeedepartment[30];
    float employeesalary;
}employee;

int main(){
    union person ss;
    printf(" enter the employeeid");
    scanf("%d",&ss.employeeid);
    printf(" enter employeename");
    scanf("%s",&ss.employeename);
    printf(" enter employeedepartment");
    scanf("%s",&ss.employeedepartment);
    printf(" enter employeesalary");
    scanf("%f",&ss.employeesalary);
    printf("the employee id is:%d\n, employee name is:%s\n, employee department is:%s\n,employee salary is:%f\n",ss.employeeid,ss.employeename,ss.employeedepartment,ss.employeesalary);
  return 0; 
}


*employee details using structure.
#include <stdio.h>
#include<string.h>

struct employees{
   
    int employeeid;
    char employeename[20];
    char employeedepartment[30];
    float employeesalary;
}employee;

int main(){
    printf(" enter the employeeid");
    scanf("%d",&employee.employeeid);
    printf(" enter employeename");
    scanf("%s",&employee.employeename);
    printf(" enter employeedepartment");
    scanf("%s",&employee.employeedepartment);
    printf(" enter employeesalary");
    scanf("%f",&employee.employeesalary);
    printf("the employee id is:%d\n, employee name is:%s\n, employee department is:%s\n,employee salary is:%f\n",employee.employeeid,employee.employeename,employee.employeedepartment,employee.employeesalary);
  return 0; 
}





