#include<stdio.h>
void main(){
     int math,phy,chem;
     printf("\n mark in physics");
     scanf("%d",&phy);
      printf("\n mark in maths");
     scanf("%d",&math);
      printf("\n mark in chemistry");
     scanf("%d",&chem);
     
     if(math>=65 && phy>=55 && chem>=50 &&(math+phy+chem)>=190){
     printf("\n the candidate is eligible for admission");
     }else if(math+phy>=140){
     printf("\n the candidate is eligible for admission");
     }else{
            printf("\n the candidate is not eligible for admission");
            }
}
           
     
     
