#include<stdio.h>
#include<string.h>
int main(){
    int a1,a2,a3,a4,a5,total;
    float avg;
    printf("enter your food expense");
    scanf("%d",&a1);
    printf("enter your rentle expense");
    scanf("%d",&a2);
    printf("enter your vehicle expense");
    scanf("%d",&a3);
    printf("enter school expense");
    scanf("%d",&a4);
    printf("enter clothing expense");
    scanf("%d",&a5);
    
    total=a1+a2+a3+a4+a5;
    avg=total/5;
    printf("\n avarage of your expense is %f",avg);
    printf("\n total expense is %d",total);
}
