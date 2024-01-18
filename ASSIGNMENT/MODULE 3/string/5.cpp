/*campare two string without using string library function*/
#include<stdio.h>
int campare(char x[],char y[],int n);
int main(){
	char a[20],b[30];
	int i,status=0;
	
	printf("\n enter string 1:");
	gets(a);
	
	printf("\n enter string 2:");
	gets(b);
	for(i=0;a[i];i++){
		if(a[i]=b[i]){
			status=1;
		}
	}
}
int campare(char x[],char y[],int n){
	int i;
	i=sizeof(x);
	if(x[n]!='\0'){
		if(x[n]!=y[n]){
			return 1;
		}else{
			return campare(x,y,n+1);
		 }
	  }
}
	

