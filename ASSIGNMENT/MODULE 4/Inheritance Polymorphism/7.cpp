/*illustrates the use of constructors in multilevel inheritance*/
#include<iostream>
using namespace std;
class P{
	public:
		P(){
			cout<<"\n class P";
		}
		P(int a,int b){
			cout<<"\n A + B :"<<a+b<<"\t constructor in P";
		}
}; 
class Y:public P{
	public:
		Y(){
			cout<<"\n class Y";
		}
		Y(int z,int x,int y):P(x,y){
			cout<<"\n Z ="<<z<<"\t\t constructor in Y";
		}
};
class S:public Y{
	public:
		S(){
			cout<<"\n class S";
		}
		S(int p,int q,int r):Y(p,q,r){
			cout<<"\n constructor in S";
		}
};
int main(){
	S s1;
	Y y1(10,20,30);
	cout<<"\n";
	S s2(1,2,3);
}
