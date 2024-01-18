/*find the largest and smallest words in string*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[20],m[20],n[20],b[20];
	int i,j,c=0,d=0,e=100;
	printf("enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		c++;
		b[j++]=a[i];
		if(a[i]=='\0'||a[i+1]=='\0'){
			b[j]='\0';
			if(c>d){
				(a[i]=='\0')?(d=c-1):(d=c);
				strcpy(m,b);
			}
			if(c<e){
				(a[i]=='\0')?(e=c-1):(e=c);
				strcpy(n,b);
			}
			c=0;
			j=0;
		}
	}
	printf("\n largest words %s have %d ",m,strlen(m));
	printf("\n smallest word %s have %d ",n,strlen(n));
}
