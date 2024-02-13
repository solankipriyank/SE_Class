/*mathematic operation like addition,substraction,multipliaction,division of two number using different parameters 
and function overloading*/
#include<iostream>
using namespace std;
class P{
	public:
		void sum(int x,int y){
			cout<<"\n a+b="<<x+y;
		}
		void sub(double x,int y){
			cout<<"\n a-b="<<x-y;
		}
		void mul(int x,double y){
			cout<<"\n a*b="<<x*y;
		}
		void div(double x,double y){
			cout<<"\n a/b="<<x/y;
		}
};
int  main(){
	P p1;
	p1.sum(10,10);p1.sub(10.10,5);p1.mul(10,10.10);p1.div(20.20,10.10);
}
