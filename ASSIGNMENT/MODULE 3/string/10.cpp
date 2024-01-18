/*extract a substring from a gievn string*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[50],b[50];
	int pos,len,l;
	
	printf("enter string:");
	gets(a);
	printf("\n enter position from substring:");
	scanf("%d",&pos);
	printf("\n enter length of substring:");
	scanf("%d",&len);
	
	strncpy(b,a+(pos-1),len);                
	printf(b);
	
	int i,j=0;
	for(i=pos-1;i<=(pos+len-1);i++){
		b[j]=a[i];
		j++;
	}
	printf(b);
}
