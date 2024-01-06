#include<stdio.h>
int main(){
    int a[10],n;
    int i,odd=0,even=0,total=0;
    
    printf("enter number of elements:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
                     printf("enter element number %d",i+1);
                     scanf("%d",&a[i]);
                     total=a[i];
                     if(a[i]%2==1){
                                   odd++;
                                   }
                                   else{
                                        even++;
                                        }
                     }
                     printf(" \n odd %d",odd);
                     printf("\n even %d",even);
                     printf("\n total",total);
}
