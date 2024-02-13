/*create a class called person that has private member variable for name,age and country.implement member function
to set and get the varible of these variables*/
#include<iostream>
using namespace std;
class person{
	private:                 //data
	char name[10],country[10];
	int age;
	public:                  //functionality
	void get_data(){
		cout<<"\n Enter person name:";
		cin>>name;
		cout<<"\n Enter person age:";
		cin>>age;
		cout<<"\n Enter country name:";
		cin>>country;
	}
	void print_data(){
		cout<<"\n name :"<<name;
		cout<<"\n age :"<<age;
		cout<<"\n country :"<<country;
	}
};
int main(){
	person p;
	p.get_data();
	p.print_data();
}
