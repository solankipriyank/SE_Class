#include<stdio.h>
int main(){
	
	int i,a,b;
	printf("\n enter the value for series:");
	scanf("%d",&a);
	b=1;
	printf(" %d",b);
	for(i=2;i<=a;i++){
		if(i%2!=0){
			b=b*1.5;
		}else{
			b=b*2;
		}
		printf(" %d",b);
	}
}
