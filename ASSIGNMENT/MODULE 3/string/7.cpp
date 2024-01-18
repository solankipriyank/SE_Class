/*copy one string to another string*/
#include<stdio.h>
int main(){
	char a[20],b[20];
	int i;
	printf("enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		b[i]=a[i];
	}
	printf("\n %c",b);
	printf("\n string a is copy to string b '0 in last is null charcter'");
}
