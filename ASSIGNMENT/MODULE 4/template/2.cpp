/*to sort the array using template */
#include<iostream>
using namespace std;
template<typename p>
void accending(p c[]){
	int i,j,k,b;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(c[i]>c[j]){
				b=c[i];
				c[i]=c[j];
				c[j]=b;
			}
		}
	}
	for(k=0;k<5;k++){
		cout<<"\t "<<c[k];
	}
}
template<typename p>
void decending(p c[]){
	int i,j,k,b;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(c[i]<c[j]){
				b=c[i];
				c[i]=c[j];
				c[j]=b;
			}
		}
	}
	for(k=0;k<5;k++){
		cout<<"\t "<<c[k];
	}
}
int main(){
	int x,y[5],i;
	for(i=0;i<5;i++){
		cout<<"\n enter  y["<<i<<"]: ";cin>>y[i]; 
	}
	cout<<"\n 1).print accending \n 2).print decending ";cin>>x;
	if(x==1){
		accending(y);
	}else if(x==2){
		decending(y);
	}else{
		cout<<"\n wrong choice";
	}
}
