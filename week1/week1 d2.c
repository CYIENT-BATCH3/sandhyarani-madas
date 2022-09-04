1. the formated inputs


#include <stdio.h>

int main(){
    int a;
    char b;
    float c;
    long int d; 
    printf("Enter the value four format inputs\n:");
    scanf("%d %c %f %ld",&a,&b,&c,&d);
    printf("After entered the four format inputs:\n");
    printf("%d %c %f %ld",a,b,c,d);

    return 0;
}

* the unformated inputs


#include <stdio.h>

int main(){
    int a=2;
    char b='c';
    float c=2.5;
    printf("Enter the 3 unformated inputs:\n");
    c=getchar();
    printf("b=%d %f %c",a,c,b);
    return 0;
}

2. Circle program:


#include <stdio.h>
int main(){
    int r=4,a;
    a=22/7*r*r;
    printf("%d",a);
    return 0;
}


3. conditional statements


#include <stdio.h>
int main(){
     int n1=46,n2=100,d1,d2,rev;
     (n1<n2)?puts("true"):puts("False");
     return 0;
}  

4. Reverse the 6 digit number


#include <stdio.h>
int main(){
    int n,t;
    printf("Enter a number");
    scanf("%d",&n);
    printf("%d \nReverse number:",n);
    t=n%10;
    printf("%d",t);
    n=n/10;
    t=n%10;
    printf("%d",t);
    n=n/10;
    t=n%10;
    printf("%d",t);
    n=n/10;
    t=n%10;
    printf("%d",t);
    n=n/10;
    t=n%10;
    printf("%d",t);
    n=n/10;
    t=n%10;
    printf("%d",t);
    n=n/10;
    t=n%10;
}


5.program of conditional statements

#include <stdio.h>
int main(){
     int n1=46,n2=100,d1,d2,rev;
     (n1<n2)?puts("true"):puts("False");
     return 0;
}


6.logical operators program

#include <stdio.h>
int main(){
     int n1=46,n2=100,n3=25,d1,d2,rev;
     (n1<n2)&&(n3<n2)?puts("true"):puts("False");
     (n1<n2)||(n3<n2)?puts("true"):puts("False");
     !(n1<n2)&&(n3<n2)?puts("true"):puts("False");
     return 0;
}

7. biggest number

#include <stdio.h>

int main(){
  int x,y,z;
  x=13;
  y=30;
  z=90;
  (x>y)?printf("x is big"):printf("y is big");
  (y>z)?printf("y is big"):printf("z is big");

}
  
8. 

#include <stdio.h>

int main(){
int A1=1,A2=2,A3=3,A4=4,A5=5;
(A1%2==0)?puts("even"):puts("odd");
(A2%2==0)?puts("even"):puts("odd");
(A3%2==0)?puts("even"):puts("odd");
(A4%2==0)?puts("even"):puts("odd");
(A5%2==0)?puts("even"):puts("odd");
}
