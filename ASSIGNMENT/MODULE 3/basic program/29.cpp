#include<stdio.h>
int main(){
    int sec,min,hour,mod;
    printf("\n enter minutes");
    scanf("%d",&m);
    
    sec=min*60;
    hour=min/60;
    mod=min%60;
    printf("\n %d minutes is equal %d second or %d hour and %d minutes",min,sec,hour,mod);
}
