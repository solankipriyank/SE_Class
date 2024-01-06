#include<stdio.h>
int main(){
    int x,y,sum;
    int s;
    printf("enter the no. x");
    scanf("%d",&x);
    printf("\n enter the no. y");
    scanf("%d",&y);
    sum=x+y;
    s=sizeof(sum);
    printf("\n sum of x and y is %d",sum);
    printf("\n size of sum is %d",s);
}
