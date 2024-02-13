/*find the multipliction values and the cubic valies using inline function.*/
#include<iostream>
using namespace std;
class A{
	public:
		inline void multiplication(int x){
			cout<<"multiplication value is  "<<x<<" is"<<x*x;
		}
		inline void cubic(int x){
			cout<<"cubic value is "<<x<<" is "<<x*x*x;
		}
};
int main(){
	A a1;
	int a,b;
	cout<<"\n Enter value of multiplication :";cin>>a;
	a1.multiplication(a);
	cout<<"\n Enter cubic value :";cin>>b;
	a1.cubic(b);
}
