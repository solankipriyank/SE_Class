#include<stdio.h>
int main(){
    float day,year;
    printf("\n enter year");
    scanf("%f",&year);
    day=year*365;
    printf("\n %.2f yesr=%.of days",year,day);
    
    int day,year,mod;
    printf("\n enter days");
    scanf("%d",%day);
    year=day/365;
    mod=day%365;
    printf("\n %d day is % year and % day",day,year,mod);
}
