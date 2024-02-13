/*implement a class called employee that has private member variable for name,employee ID, and salary.include member
fuctions to calculate and set salary based on employee performance.using of constructor */
#include<iostream>
using namespace std;
class employee{
	private:                 //data
	char name[20];
	int ID,salary;
	public:                  //functionality
	employee(){
		cout<<"\n Enter Employee Name :";cin>>name;
		cout<<"\n Enter Employee id :";cin>>ID;
		cout<<"\n Enter Employee salary :";cin>>salary;
	}
	void print_data(){
		cout<<"\n Employee Name is "<<name;
		cout<<"\n Employee id is "<<ID;
		cout<<"\n Employee salary is "<<salary;
	}
};
int main(){
	employee e;
	e.print_data();
}
