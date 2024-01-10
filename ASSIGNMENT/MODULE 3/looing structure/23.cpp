#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("\n enter any number:");
	scanf("%d",&a);
	
	for(;a!=0;){
		b=a%10;
		c=b%10;
		a=a/10;
	}
	printf("\n reverse number is =%d",c);
}
