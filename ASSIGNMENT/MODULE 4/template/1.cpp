/*swap the two values using template*/
#include<iostream>
using namespace std;
template<typename p>
void swap_value(p &x,p &y){
	swap(x,y);
}
int main(){
	int x,y;
	cout<<"\n enter value of x :";cin>>x;
	cout<<"\n enter value of y :";cin>>y;
	swap_value(x,y);
	cout<<"\n x ="<<x<<"y ="<<y;
}
