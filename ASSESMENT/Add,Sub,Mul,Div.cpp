
#include<stdio.h>
float cal();
int main(){
	float ans;
	ans=cal();
	printf("\n ans is %2.f",ans);
}
float cal(){
	float a,b,c;
	int d;
	printf("\n enter value of a:");
	scanf("%f",&a);
	printf("\n enter value of b:");
	scanf("\f",&b);
	printf("\n enter value of d:");
	scanf("%d",&d);
	
	switch(d){
		case 1:{c=a+b;
			    break;
		}
		case 2:{c=a-b;
			    break;
		}
		case 3:{c=a*b;
			    break;
		}
		case 4:{c=a/b;
			    break;
		}
		default:{
			printf("\n choise is wrong");
			break;
		}
	}
	return c;
}

