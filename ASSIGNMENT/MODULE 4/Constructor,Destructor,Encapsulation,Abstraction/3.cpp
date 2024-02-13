/*create a class called car that has private member variable for company,model and year.implement member function
to set and get the varible of these variables*/
#include<iostream>
using namespace std;
class car{
	private:                 //data
	char company[50];
	int year,model;
	public:                  //functionality
	void get_data(){
		cout<<"\n Enter company name:";
		cin>>company;
		cout<<"\n Enter year:";
		cin>>year;
		cout<<"\n Enter model:";
		cin>>model;
	}
	void print_data(){
		cout<<"\n company name :"<<company;
		cout<<"\n opening year :"<<year;
		cout<<"\n model no :"<<model;
	}
};
int main(){
	car c;
	c.get_data();
	c.print_data();
}
