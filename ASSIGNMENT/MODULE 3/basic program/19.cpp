#include<stdio.h>
#include<math.h>
int main(){
    float a,r,t,p,n,i,j;
    printf("enter initial principal balance");
    scanf("%f",&p);
    printf("enter interest rate");
    scanf("%f",&r);
    printf("enter no. of time interest applied per time period");
    scanf("%f",&n);
    printf("enter no. of time periods elapsed");
    scanf("%f",&t);
    
    i=1+r/(100*n);
    printf("\n %f",i);
    j=n*t;
    printf("\n %f",j);
    
    a=p*(pow(1+r/(100*n),n*t));
    printf("\n final amount is %f",a);
    printf("\n interest for %f year is %f",t,a-p);
}
    
