#include<stdio.h>
void palindrome(int a);
int main(){
	int x;
	printf("\enter the number:");
	scanf("%d",&x);
	palindrome(x);
}
void palindrome(int a){
	int i,b,c=0,d=0;
	b=a;
	for(i=a;i=0;i=a){
		c=a%10;
		d=(d*10)+c;
		a=a/10;
	}
	if(a==b){
		printf("\n %d is palindrome:",a);
	}
}
