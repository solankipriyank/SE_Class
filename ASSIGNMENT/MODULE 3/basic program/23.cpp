#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);
    
    printf("\n value of x and y swaping is %d and %d",x,y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("\n value of x and y swaping is %d and %d",x,y);
}
