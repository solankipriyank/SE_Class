#include<stdio.h>
int main(){
	int a[5],i,b=0;
	for(i=0;i<5;i++){
		printf("enter number is %d:",i+1);
		scanf("%d",&a[i]);
		b=b+a[i];
	}
	printf("\n sum of all  value is %d",b);
}
