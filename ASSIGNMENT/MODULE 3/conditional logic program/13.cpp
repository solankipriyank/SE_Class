#include<stdio.h>
int main(){
    
    int a,b,c,small;
    printf("\n enter the number");
    scanf("%d %d %d",&a,&b,&c);
    
    small=a(a<b ? a:b)? c:(a<b)? a:b);
    printf("\n the smallest is %d",small);
    
    return 0;
}
