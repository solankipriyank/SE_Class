#include<stdio.h>
int main(){
    
    int unit;
    float amt,to_amt,surchg;
    
    printf("\n enter total unit");
    scanf("%d",&unit);
    
    if(unit<=50)
    {
       amt=unit*0.50;
       }
       else if(unit<=150)
       {
       amt=25+((unit-50)*0.75);
       }
       else if(unit<=250)
       {
       amt=100+((unit-150)*1.20);
       }
       else 
       {
       amt=220+((unit-250)*1.50);
       }
       surchg=amt*0.20;
       to_amt=amt+surchg;
       
       printf("\n electricity bill=%2.f",to_amt);
}
