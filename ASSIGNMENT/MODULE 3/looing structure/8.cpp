#include<stdio.h>

int main(){

int a=1,b=5,c=6,d=2;

printf("Enter 4 numbers here...\n");

if(a>b&&a>c&&a>d){

printf("%d (a) is greatest",a);

}

else if(b>c&&b>d){

printf("%d (b) is greatest",b);

}

else if(c>d){

printf("%d (c) is greatest",c);

}

else{

printf("%d (d) is greatest",d);

}

return 0;

}
