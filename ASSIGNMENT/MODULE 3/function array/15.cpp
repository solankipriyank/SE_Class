#include<stdio.h>
int main(){
	int a[5],i,j,b;
	
	for(i=0;i<5;i++){
		printf("enter value is %d:",i+1);
		scanf("%d",a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("\t %d",a[i]);
	}
}
