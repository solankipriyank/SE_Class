#include<stdio.h>
int main(){
	
	int n;
	printf("\n enter the number:");
	scanf("%d",&n);
	
	for(int i=1;i<=10;i++){
		printf("\n number of %d *%d is %d ",n,i,n*i);
	}
	return 0;
}
