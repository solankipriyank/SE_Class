#include<stdio.h>
#include<string.h>
int main(){
    char a1(20),a2(20),a3(20),a4(20),a5(20);
    int b1,b2,b3,b4,b5,total;
    float avg;
    
    printf("enter first employe name");
    scanf("%c",&a1);
    printf("enter first employe salary");
    scanf("%c",&b1);
    printf("enter second employe name");
    scanf("%c",&a2);
    printf("enter second employe salary");
    scanf("%c",&b2);
    printf("enter third employe name");
    scanf("%c",&a3);
    printf("enter third employe salary");
    scanf("%c",&b3);
    printf("enter fourth employe name");
    scanf("%c",&a4);
    printf("enter fourth employe salary");
    scanf("%c",&b4);
    printf("enter fifth employe name");
    scanf("%c",&a5);
    printf("enter fifth employe salary");
    scanf("%c",&b5);
    
    total=b1+b2+b3+b4+b5;
    avg=total/5;
    
    printf("\n avarage salary of total employe is %f",avg);
    printf("\n total salary of total employe is %d",total);
}

    
    
