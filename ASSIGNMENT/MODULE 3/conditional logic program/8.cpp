#include <stdio.h>
int main() {
	
    float ht;
	printf("Enter  the Height");
	scanf("%f",&ht);
	
	if(ht < 150.0){
		  printf("Dwarf\n");
           }else if((ht>=150.0) && (ht<=165.0)){
                 
	     printf(" Average Height\n"); else if((ht>=165.0) && (ht <= 195.0))
		  printf("Taller\n"); 
          }else{
		  printf("Abnormal height\n");
       }
}
