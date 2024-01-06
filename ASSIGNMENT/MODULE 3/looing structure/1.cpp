#include<stdio.h>
int main (){
    
    int a,i,fact=1;
    printf("\n enter number");
    scanf("%d",&a);
    
    for(i=a;i>=1;i--)
    {
    fact=fact*i;
    }
    printf("\n factorial is %d",fact);
}
