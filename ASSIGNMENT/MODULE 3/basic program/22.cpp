#include<stdio.h>
#include<math.h>
int main(){
    float a,r,y,p;
    printf("enter principal amount");
    scanf("%f",&p);
    printf("enter rate of interest");
    scanf("%f",&r);
    printf("enter number of year ");
    scanf("%f",&y);
    
    a=p*(pow(1+r/100,y));
    printf("\n final amount is %f",a);
    printf("\n interest for %f year is %f",y,a-p);
}
