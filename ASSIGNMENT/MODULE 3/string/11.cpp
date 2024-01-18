/*read a sentance and replace lowercase character with uppercase and vice versa*/
#include<stdio.h>
int main(){
	char a[20];
	int i;
	
	printf("enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a')&&(a[i]<='z')){
			a[i]='A'+a[i]-'a';
		}else if((a[i]>='A')&&(a[i]<='Z')){
			a[i]='a'+a[i]-'A';
		}
	}
	printf("\n");
	puts(a);
}
