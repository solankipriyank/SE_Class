#include<stdio.h>
void reverse();
int main(){
	int i,a[5],b[5];
	
	for(i=0;i<5;i++){
		printf("\n enter number %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		b[4-i]=a[i];
	}
	for(i=0;i<5;i++){
		printf("%d",b[i]);
	}
}
