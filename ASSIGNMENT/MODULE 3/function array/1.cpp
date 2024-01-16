#include<stdio.h>
int largevalue();
int main(){
	
	int b;
	b=largevalue();
	printf("\n enter largest value is %d:",b);
}
int largevalue(){
	
	int i,j,n[10],a=0;
	
	for(i=0;i<10;i++){
		printf("\n enter value is %d:",i+1);
		scanf("%d",&n[i]);
	}
	for(j=0;j<10;j++){
		if(a<n[j]){
			a=n[j];
		}
	}
	return 0;
}
