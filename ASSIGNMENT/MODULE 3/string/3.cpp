/*individual character of string in reverse order*/
#include<stdio.h>
int main(){
	char a[20];
	int i,count=0;
	
	printf("\n enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	for(i=count-1;i>=0;i--){
		printf("%c",a[i]);
	}
	printf("\n reverse order :");
}
