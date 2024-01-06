#include<stdio.h>
int main(){
    int i,n=0,m=66,j;
    scanf("%d",&n);
    printf("\n\n");
       
    for(i=0;i<n;i++)
    {
    m=65;
    for(j=0;j<=i;j++,m++)
    {
    printf("%c",m);
    if(m>90)
    {
            m=64
    }
    }
    printf("\n");
    }
}
