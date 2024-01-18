/*separate individual character from a string */
#include<stdio.h>
int main(){
	char a[20];
	int i,count=0;
	
	printf("\n enter the string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
		count++;
	}
	printf("\n %d separate character string is",count);
}
