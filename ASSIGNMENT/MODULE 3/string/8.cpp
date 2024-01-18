/*count total number of vowel or consonants in a string*/
#include<stdio.h>
int main(){
	char a[50];
	int i,y=0,p=0;
	printf("enter string:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a' && a[i<='z']) || (a[i]>='A'  && a[i<='Z'])){
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
			    y++;	
			}else{
				p++;
			}
		}
	}
	printf("\n total vowel is %d",y);
	printf("\n total consonant is %d",p);
}
