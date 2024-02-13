/*implement a class called circle that has private member variable for radius.include member function to calculate
the circle area and circumference*/
#include<iostream>
using namespace std;
class circle{
	private:               //data
	int r;
	float pi=3.14;
	public:                //functionality
	float area(int r){
		return (pi*r*r);
	}
	float circumference(int r){
		return (2*pi*r);
	}
};
int main(){
	int a;
	cout<<"\n Enter radious of circle:";
	cin>>a;
	circle c1;
	cout<<"\n area of circle is "<<c1.area(a);
	cout<<"\n circumference of circle is "<<c1.circumference(a);
}
