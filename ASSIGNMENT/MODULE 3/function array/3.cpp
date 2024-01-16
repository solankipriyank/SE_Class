#include<stdio.h>
int reverse();
int main(){
	reverse();
}
int reverse(){
	int a[5],i;
	for(i=0;i<5;i++){
		
		printf("\n enter value:");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=4;i>=0;i--){
		printf("%d is ",a[i]);
	}
}
