#include<stdio.h>
int main(){
	
	int num,a,b,c=0;
	printf("enter a number:");
	scanf("%d",&num);
	
	a=num;
	
	while (a>0){
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("reverse number is %d",c);
	
	if(num==c)
	printf("%d is palindrome number",num);
	else{
		printf("%d is not the palindrome",num);
	}
	return 0;
}
