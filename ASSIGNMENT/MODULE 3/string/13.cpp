/*remove character from a string except alphabets */
#include<stdio.h>
void filter(char x[]);
int main(){
	char a[50],b[50];
	int i,j=0;
	printf("enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&&a[i]<='Z')){
			b[j]=a[i];
			j++;
		}
	}
	printf("%c",a);
	printf("\n\n%s",b);
	
	filter(a);
	printf(a);
}
void filter(char x[]){
	int i,j=0;
	for(i=0;x[i]!='\0';i++){
	if((x[i]>='a'&& x[i]<='z')||(x[i]>='A'&&x[i]<='Z')){
		x[j]=x[i];
		j++;
	}
}
x[j]='\0';
}
