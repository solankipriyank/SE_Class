/*find the max number from given two numbers using friend function*/
#include<iostream>
using namespace std;
class P{
	private :
		int a,b;
		void get_data(){
			cout<<"\n enter value of a :";cin>>a;
			cout<<"\n enter value of b :";cin>>b;
		}
		friend void Y(P& temp);
};
void Y(P& temp){
	temp.get_data();
		cout<<"\n max number is :"<<max(temp.a,temp.b);
}
int main(){
	P p1;
	Y (p1);
}
