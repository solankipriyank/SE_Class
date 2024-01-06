#include<stdio.h>
int main(){
    int f;
    float c;
    printf("\n enter temprature  in fahrenheit");
    scanf("%d",&f);
    c=(f-32)*5.0/9;
    printf("\n temprature in celcious is %f",c);
}
