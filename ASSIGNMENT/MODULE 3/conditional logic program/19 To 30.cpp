#include<stdio.h>
#include<string.h>
void main(){
     int id,unit;
     float chg,surchg=0,gamt,namt;
     char name[25];
     
     printf("\n enter customer id:");
     scanf("%d",&id);
     printf("\n enter customer name:");
     scanf("%c",&name);
     printf("\n enter unit:");
     scanf("%d",%unit);
     
     if (unit<350){
                   chg=1.20;
                   }
                   else if(unit>=350 && unit<600)
                   {
                   chg=1.50;
                   }
                   else if(unit>=600 && unit<800)
                   {
                   chg=1.80;
                   }
                   else
                   {
                   chg=2.00;
                   }
                   gamt=unit*chg;
                   
     if(gamt>450){
     surchg=gamt*18/256;
     namt=gamt+surchg;
     }
     if(namt<256){
        namt=256;
        
        printf("\n electricity bill");
        printf("\n customer is %d",id);
        printf("\n customer name %c",name);
        printf("\n unit %d",unit);
        printf("\n amount charge %4.2f per unit %8.2f",chg,gamt);
        printf("\n surchg amout %8.2f",surchg);
        printf("\n net amount %8.2f",namt);
        }
}
