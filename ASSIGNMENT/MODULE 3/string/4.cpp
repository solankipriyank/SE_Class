/*count total number of words in string*/
#include<stdio.h>
int main(){
	char a[50];
	int i,count=0;
	
	printf(" enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		if(a[i]='\0'){
			if(a[i+1]!='\0'){
				count++;
			}
		}
	}
	printf("\n total number is %d",count+1);
}
