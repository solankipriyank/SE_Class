/*structure for five employe that provide the following information print and display empno,empname,address and age*/
#include<stdio.h>
int main(){
	
	int i,empno[5],empage[5];
	char empname[5][20],empaddress[5][20];
	
	for(i=0;i<5;i++){
		printf("\n enter employe number:");
		scanf("%d",&empno[i]);
		
		while(getchar()!='\n');
		printf("\n enter employe name:");
		gets(empname[i]);
		
		printf("\n enter employe age:");
		scanf("%d",&empage[i]);
		
		while(getchar()!='\n');
		printf("\n enter employe address:");
		gets(empaddress[i]);
		printf("\n");
	}
	for(i=0;i<5;i++){
		printf("%d",i+1);
		printf("\n employe name:%c ",empname[i]);
		printf("\n employe number is %d",empno[i]);
        printf("\n employe age is %d",empage[i]);
        printf("\n employe address is %c",empaddress[i]);
        printf("\n");
	}
}
