#include<stdio.h>
int main(){
	int a,i,b=0;
	printf("\n enter number :");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		b=b+i;
	}
	printf("\n ans of series is %d",b);
}
