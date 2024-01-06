#include <stdio.h>
int main(){
	
    int num,sum=0,fd,ld;

    printf("Enter any number: ");
    scanf("%d",&num);
    
    ld= num % 10;
    
    fd= num;

    while(num >= 10)
    {
        num = num / 10;
    }
    fd = num;

    sum = fd + ld; 

    printf("Sum of first and last digit = %d", sum);

    return 0;
}
