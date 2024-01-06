#include <stdio.h>
void main(){
     
   int monthno;  
   char monthnm[15]; 

   printf("\n enter Month No : ");  
   scanf("%d",&monthno);  

   switch(monthno)  {
	
    case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	       printf("\n Month have 31 days. \n");
	       break;
	case 2:
	       printf("\n The second month is a February and have 28 days. \n");
	       printf("\n in leap year The February month  Have 29 days.\n");  
	       break;
	case 4:
	case 6:
	case 9:
	case 11:
	       printf("\n Month have 30 days. \n"); 
	       break;
	default:
	       printf("\n Invalid Month number..");  
	       break;
      }
}
