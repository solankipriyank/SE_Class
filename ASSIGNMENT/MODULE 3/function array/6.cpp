#include<stdio.h>
int i,j,k,a[3][3],b[3][3],c[3][3];

void add();
void sub();
void mul();

void printf_c();

int main(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n enter value of b is %d is %d",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	add();
	printf_c();
	printf("\n");
	sub();
	printf_c();
	printf("\n");
	mul();
	printf_c();
	printf("\n");
}
void add(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			}
		}
}
void sub(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]-b[i][j];
		}
	}
}
void mul(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j])+(a[i][2]*b[2][j]);
			printf("%d",c[i][j]);
        }printf("\n");
    }
}
void multiplication(){
	int d;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
				d=a[i][k]*b[k][j];
				c[i][j]=c[i][j]+d;
			}
        }
    }
}
void printf_c(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(c[i][j]>=0 && c[i][j]<10){
				printf("%d",c[i][j]);
			}else if (c[i][j]<100){
				printf("%d",c[i][j]);
			}else{
				printf("%d",c[i][j]);
			}
        }
    }printf("\n");
}
