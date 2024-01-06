#include<stdio.h>
int main(){
    int i,n=0,j;
    scanf("%d",&n);
    printf("\n\n");
       
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i;j++)
    {
    printf("");
    }
    for(j=1;j<=i;j++)
    {
    printf("*")
    }
    for(j=2;j<=i;j++)
    {
    printf("*");
    }
    printf("\n");
    }
}
