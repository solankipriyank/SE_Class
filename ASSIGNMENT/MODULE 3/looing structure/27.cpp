#include<stdio.h>
int main(){
	int i,a;
	float b,c,d,sum;
	printf("\n enter the number:");
	scanf("%d",&a);
	c=0;
	d=0;
	for(i=1;i<=a;i++){
		b=(float)i/(i+1);
		if(i%2==0){
			c=c+b;
		}else{
			d=d+b;
		}
	}
	sum=d-c;
	printf("\n ans of series is %2f",sum);
}
