/*find the length of a string without using library function*/
#include<stdio.h>
int main(){
	char a[50];
	int i,count=0;
	
	printf("\n enter string:");
	getchar();
	fgets(a,sizeof(a),stdin);
	
	for(i=0;i<=a[i]!='\0';i++){
		count++;
	}
	printf("\n length of string is %d",count);
}
