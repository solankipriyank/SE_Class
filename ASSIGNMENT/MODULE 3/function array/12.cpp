/*5 students name and store it in array*/
#include<stdio.h>
int main(){
	int i;
	char name[5][20];
	
	for(i=0;i<5;i++){
		printf("\n enter name %d:",i+1);
		gets(name[i]);
	}
	for(i=0;i<5;i++){
		printf("\n name %d:%c",i+1,name[i]);
	}
}
