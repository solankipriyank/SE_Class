#include <stdio.h>
int main(){
      
    int a,b,c, sum;  
 
    printf("Input three angles of triangle : ");  
    scanf("%d %d %d", &a, &b, &c);  
  
     
    sum = anglea + angleb + anglec;   
  
    if(sum == 180)   
    {  
        printf("\n It is a valid triangle");  
    }  
    else  
    {  
        printf("\n It is a invalid triangle");  
    }  
    return 0;
}
