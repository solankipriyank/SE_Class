/*create a class person having members name and age.derive a class student having member percentage.derive another class 
teacher having member salary.write neccessary member function to initialize,read and write data.write also main function
(multiple inheritance)*/
#include<iostream>
using namespace std;
class person{
	protected:                                       //data
	char name[20];
	int age;
	public:
		void get_data(){
			cout<<"\n Name:";cin>>name;
			cout<<"\n Age :";cin>>age;
		}
};
class student{
	protected:
		float per;
		public:
			void get_percentage(){
				cout<<"\n Percentage:";cin>>per;
			}
};
class teacher{
	protected:
		int salary;
		public:
		void get_salary(){
			cout<<"\n Salary :";cin>>salary;
		}
};
class member:public person,public student,public teacher{
	public:
		void print_data(){
			cout<<"\n Name = "<<name<<"\n Age="<<age;
			cout<<"\n Percentage = "<<per;
			cout<<"\n Salary = "<<salary;
		}
};
int main(){
	member m1;
	m1.get_data();
	m1.get_percentage();
	m1.get_salary();
	m1.print_data();
}


