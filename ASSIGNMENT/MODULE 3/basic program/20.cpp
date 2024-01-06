#include<stdio.h>
int main(){
    int ms,ip,li,rs;
    printf("\n enter monthly salary");
    scanf("%d",&ms);
    
    ip=ms/10;
    li=ms/10;
    
    printf("\n insurance policy is %d",ip);
    printf("\n loan installment is %d",li);
    
    rs=ms-ip-li;
    printf("\n remaining salary is %d",rs);
}
