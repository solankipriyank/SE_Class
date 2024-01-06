#include<stdio.h>
int main(){
    int i,n=0,j;
    scanf("%d",&n);
    printf("\n\n");
       
    for(i=0;i<n;i++)
    {
    for(j=0;j<=i;j++)
    {
    printf("*");
    }
    printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
    for(j=1;j<=i;j++)
    {
    printf("*")
    }
    printf("\n");
    }
}
