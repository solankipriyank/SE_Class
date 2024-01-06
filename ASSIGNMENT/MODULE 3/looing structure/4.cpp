/* table up to given numbers*/

#include<stdio.h>
int main(){
    
    int num,i,n;
    printf("enter the number");
    scanf("%d",&num);
    printf("\n table of %d is ",num);
    
    for (i=1;i<=10;i++)
    {
        n=num*i;
        printf("%d * %d=%d",num,i,n);
    }
    return 0;
}
