/*implement a class called student that has private member variables for name,class,roll number and marks.include
member function to calculate the grade based on the marks and display yhr student informartion .accept address from
each student implement using of aggregation.*/
#include<iostream>
#include<string>
using namespace std;
class Address{
	public:
		string street,city,state,zipcode,addr;
		void get_address(){
			cin.sync();
			cout<<" street:";getline(cin,street);
			cout<<" city:";getline(cin,city);
			cout<<" state :";getline(cin,state);
			cout<<" zicode :";getline(cin,zipcode);
			
			addr=street+","+city+","+state+","+zipcode+",";
		}
};
class student{
	private:
		string name;
		int cls,rollno,marks;
		char grade;
		Address address;
		public:
			student(string name,int a,int b, int c, Address&addr){
				this->name=name;
				this->cls=a;
				this->rollno=b;
				this->marks=c;
				this->address=addr;
			}
			void calculate_grade(){
				if(marks>=90){
					grade='A';
				}else if(marks>=80){
					grade='B';
				}else if(marks>=70){
					grade='C';
				}else if(marks>=60){
					grade='D';
				}else {
					grade='F';
				}
			}
			void display_data(){
				cout<<"\n name :"<<name;
                cout<<"\n Class :"<<cls;
				cout<<"\n Rollno :"<<rollno;
				cout<<"\n marks :"<<marks;
								
			}
};
int main(){
	int roll_no,marks,cls;
	string name;
	Address addr1,addr2;
	cout<<"\n date of student 1 ";
	cout<<"\n enter name :";cin>>name;
	cout<<"\n enter class : ";cin>>cls;
	cout<<"\n enter roll no : ";cin>>roll_no;
	cout<<"\n enter marks: ";cin>>marks;
	addr1.get_address();
	student student1(name,cls,roll_no,marks,addr1);
	cout<<"\n data of student 2";
	cout<<"\n enter name :";cin>>name;
	cout<<"\n enter class : ";cin>>cls;
	cout<<"\n enter roll no : ";cin>>roll_no;
	cout<<"\n enter marks: ";cin>>marks;
	addr2.get_address();
	student student2(name,cls,roll_no,marks,addr2);
	student1.display_data();
	cout<<"\n";
	student2.display_data();
}
