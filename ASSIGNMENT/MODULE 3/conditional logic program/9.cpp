#include<stdio.h>
int main(){
     char a;
     printf("enter any key to check uppercase,lowercase,digit and special character");
     scanf("%c",&a);
     
     if(a>=65 && a<90)
     {
              printf("\n character is uppercase");
              }
              if(a>=97 && a<=122)
              {
              printf("\n character is lowercase");
              }
              if(a>=48 && a<=57)
              {
              printf("character is digit");
              }
              else
              {
              printf("character is special character");
              }
}
                   
