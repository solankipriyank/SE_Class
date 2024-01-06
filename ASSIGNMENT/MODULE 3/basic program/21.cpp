#include<stdio.h>
int main(){
    int a,b,c;
    int d,e;
    printf("\n enter value of a");
    scanf("%d",&a);
    printf("\n enter value of b");
    scanf("%d",&b);
    printf("\n value of a and b swaping is %d and %d",a,b);
    
    c=a+b;
    a=c-b;
    b=a-c;
    printf("\n value of a and b swaping is %d and %d"a,b);

    printf("\n enter value of d");
    scanf("%d",&d);
    printf("\n enter value of e");
    scanf("%d",&e);
    printf("\n value of d and e swaping is %d and %d",d,e);
    
    d=d+e;
    e=d-e;
    d=d-e;
    printf("\n value of d and e swaping is %d and %d",d,e);
}    
    
