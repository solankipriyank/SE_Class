/*find area of rectangle using inheritance*/
#include<iostream>
using namespace std;
class rectangle{
	public:                           //data
	float length,width;
	void get_data(){
		cout<<"\n length :";cin>>length;
		cout<<"\n width :";cin>>width;
	}
	void print_data(){
		float area;
		area=length*width;
		cout<<"\n area of rectangle ="<<area;
	}	
};
int main(){
	rectangle r1;
	r1.get_data();
	r1.print_data();
}
