/*count the total number of alphabets,degits and special character in string*/
#include<stdio.h>
int main(){
	char a[30];
	int i,c=0,n=0,s=0;
	
	printf("\n enter string:");
	gets(a);
	
	for(i=0;a[i];i++){
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
			c++;
		}else if(a[i]>='0' && a[i]<='9'){
			n++;
		}else {
			s++;
		}
	}
	printf("total alphabets is %d total digits is %d total special character space is %d",c,n,s);
}
