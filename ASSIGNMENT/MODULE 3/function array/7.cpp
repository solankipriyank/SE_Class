/*length of string without using inbuilt function*/
#include<stdio.h>
int main(){
	char a[20];
	int i,count=0;
	
	printf("\n enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	printf("\n length of string is %d",count);
}
