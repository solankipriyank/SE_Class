#include<stdio.h>
int main(){
    float temp;
    printf("\n the temprature in centigrade");
    scanf("%c",temp);
    
    if(temp<0){
               printf("\n freezing weather");
               }
               else if(temp<10)
               {
                    printf("\n very cold weather");
                    }
                    else if(temp<20)
                    {
                         printf("\n cold weather");
                         }
                         else if(temp<30)
                         {
                              printf("\n normal temprature");
                              }
                              else if(temp<40)
                              {
                                   printf("\n hot");
                                   }
                                   else
                                   {
                                       printf("\n very hot");
                                       }
}
                    
