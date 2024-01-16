#include<stdio.h>
int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		printf("\n \n enter value of a %d:",i);
		scanf("%d",&a[i]);
		(a[i]%2==0)?(printf("even number")):(printf("odd number"));
	}
}
