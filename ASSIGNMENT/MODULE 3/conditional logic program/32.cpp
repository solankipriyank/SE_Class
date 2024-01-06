#include<stdio.h>
int main(){
    
    float basic,gross,a,b;
    printf("\n enter basic salary an employe");
    scanf("%f",&basic);
    
    if(basic<=10000)
    {
        a=basic*0.8;
        b=basic*0.2;
        }
        else if(basic<=20000)
        {
             a=basic*0.9;
             b=basic*0.25;
             }
             else{
                  a=basic*0.95;
                  b=basic*0.3;
                  }
                  gross=basic+a+b;
                  printf("\n gross salary of employe=%2.f",gross)'
                  return 0;
}
             
