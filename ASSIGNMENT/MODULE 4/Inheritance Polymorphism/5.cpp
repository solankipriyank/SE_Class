/*assume that the test results of a betch of student are stored in three different classes.class student are storing
the rollnumber.class test stores the marks obtained in two subjects and result contain the total marks obtained in the
test.the class result can inherit the details of the marks obtained in the test and roll number of student.(multilevel inheritance)*/
#include<iostream>
using namespace std;
class student {
	public:
		int rollno;
		void get_rollno(){
			cout<<"\n enter roll no :";cin>>rollno;
		}
};
class test:public student{
	public:
		int sub,sub2;
		void get_marks(){
			cout<<"\n enter marks of subject :";cin>>sub;
			cout<<"\n enter marks of subject :";cin>>sub2;
		}
};
class result:public test{
	public:
		int total;
		void sum(){
			total=sub+sub2;
		}
		void print_data(){
			cout<<"\n Roll no :"<<rollno;
			cout<<"\n total marks :"<<total;
		}
};
int main(){
	result r1;
	r1.get_rollno();
	r1.get_marks();
	r1.sum();
	r1.print_data();
}
