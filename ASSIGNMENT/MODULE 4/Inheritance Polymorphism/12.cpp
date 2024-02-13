/*swap the two numbers using friend function without using third variable*/
#include<iostream>
using namespace std;
class P{
	private:
		int a,b;
		protected:
			void get_data(){
				cout<<"\n enter value a :";cin>>a;
				cout<<"\n enter valur b :";cin>>b;
			}
			friend void Y(P& temp);
};
void Y(P& temp){
	int x;
	temp.get_data();
	x=temp.a+temp.b;
	temp.b=x-temp.b;
	temp.a=x-temp.a;
	cout<<"\n a =" <<temp.a;
	cout<<"\n b ="<<temp.b;
}
int main(){
	P p1;
	Y(p1);
}
