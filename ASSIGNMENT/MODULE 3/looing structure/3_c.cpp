#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter limit");
    scanf("%d",&n);
    
    for(i=2;i<=n;i+=2)
    {
    sum+=i
    }
    printf("sum of even numbers %d=%d",n,sum);
}
