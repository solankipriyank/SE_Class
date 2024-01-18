/*find the maximum number of character in a string.
(ex)=hello some one how are you.// maximum number of charcter is in "hello" and is equal to 5*/
#include<stdio.h>
int main(){
	char a[50];
	int i,count=0,n=0;
	
	printf("enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		count++;
		if(a[i]=='\0'){
			if(count>n){
				n=count-1;
			}count=0;
		}else if(a[i+1]=='\0'){
			if(count>n){
				n=count;
			}
		}
	}
	printf("\n maximum number of charcter is %d",n);
}
