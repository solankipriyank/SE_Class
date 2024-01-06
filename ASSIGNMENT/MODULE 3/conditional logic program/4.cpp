#include<stdio.h>
int main(){
    int choice,a,b;
    printf("\n enter the value of a");
    scanf("%d",&a);
    printf("\n enter the value of b");
    scanf("%d",&b);
    printf("\n 1.addition \n 2.substraction \n 3.multiplication \n 4.divisio");
    printf("\n enter the choice");
    scanf("%d",choice);
    if (choice==1){
                   printf("\n the sum of %d and %d is %d",a,b,a+b);
                   }else if(choice==2){
                         printf("\n the sum of %d and %d is %d",a,b,a-b);
                         }else if (choice==3){
                   printf("\n the sum of %d and %d is %d",a,b,a*b);
                   }else if(choice==4){
                         printf("\n the sum of %d and %d is %d",a,b,a/b);
                         }
}
