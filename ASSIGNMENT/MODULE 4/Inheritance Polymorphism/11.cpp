/*calculate the area of circle,rectangle and triangle using function oevrloading rectangle: are*breadth,triangle:1/2
*area *breadth,circle:pi*area*area */
//circle          A=pi+r*r
//rectangle       A=length*width
//triangle        A=(1/2)*base*height

#include<iostream>
using namespace std;
class A{
	public:
		void area_circle(double x,int y){
			cout<<"\n area of circle :"<<x*y*y;
		}
		void area_rec(int x,int y){
			cout<<"\n area of rectangle :"<<x*y;
		}
		void area_tri(double x,int y,int z){
			cout<<"\n area of triangle :"<<x*y*z;
		}
};
int main(){
	int radious,length,width,base,height;
	A a1;
	cout<<"\n enter radious to area of circle :";cin>>radious;
	a1.area_circle(3.14,radious);
	cout<<"\n enter length and width to area of rectangle :";cin>>length>>width;
	a1.area_rec(length,width);
	cout<<"\n enter base and height to area of triangle :";cin>>base>>height;
	a1.area_tri(0.5,base,height);
}
