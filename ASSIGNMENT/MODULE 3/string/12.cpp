/*find the number of times a given word 'is' appears in the given string*/
#include<stdio.h>
int main(){
	char a[20],b[10];
	int i,j,k,c=0,count=0,n=0;
	printf("enter string is a:");
	gets(a);
	printf("enter string is b:");
	gets(b);
	
	for(i=0;b[i]!='\0';i++){
		count++;
	}
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[0]){k=0;
		for(j=1;j<=i+count;j++){
			if(a[j]!=b[k] || a[j]=='\0'){
				if(b[k]!='\0'){
					 break;
				}else{
					c=1;
				}
			}k++;
		}
		}
		if(c==1){
			n=n+1;
			c=0;
		}
	}
	printf("\n number of time is %d",n);
}
