#include<stdio.h>
int main(){
	
	int a,b,i;
	printf("\n enter value of (1*1)+(2*2)+(3*3)...+(n*n):");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		b=b+i*i;
	}
	printf("\ans of series is =%d",b);
}
