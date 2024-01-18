/*combine two string manually*/
#include<stdio.h>
#include<string.h>
void combine(char x[],char y[]);
void combine(char x[],char y[],int i);
int main(){
	char a[20],b[20];
	int i,l1;
	printf("entre string a:");
	gets(a);
    printf("entre string b:");
	gets(b);
	l1=strlen(a);
	for(i=0;b[i]!='\0';i++){
		a[l1++]=b[i];
	}
	strcat(a,b);
	combine(a,b);
	combine(a,b,0);
	printf(a);
}
void combine(char x[],char y[]){
	int i,l1;
	l1=strlen(x);
	for(i=0;y[i]!='\0';i++){
		x[l1++]=y[i];
	}
}
void combine(char x[],char y[],int i){
	int l1;
	l1=strlen(x);
	if(y[i]!='\0'){
		x[l1++]=y[i];
		combine(x,y,i+1);
	}else{
		return;
	}
}
