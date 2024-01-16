/*factorial using recursion*/
#include<stdio.h>
int factorial(int n);
int main(){
	
	int a,ans;
    printf("enter number to find factorial:");
	scanf("%d",&a);
	ans=factorial(a);
	printf("\n factorial of %d is =%d",a,ans);	
}
int factorial(int n){
	
	if(n>0){
		return n*(factorial(n-1));
	}else{
		return 1;
	}
}
