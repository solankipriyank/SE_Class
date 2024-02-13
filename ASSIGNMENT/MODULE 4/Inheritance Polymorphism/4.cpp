/*display student marks sheet using multiple inheritance*/
#include<iostream>
using namespace std;
class student{
	protected:
    char name[20];
    string school_name;
    int standard,rollno;
    public:
    void get_name(){
    	cout<<"\n Enter name:";cin>>name;
    	cout<<"\n enter rollno :";cin>>rollno;
    	cin.sync();
    	cout<<"\n enter school name:";cin>>school_name;
    	cout<<"\n enter standard :";cin>>standard;
	}
};
class marks{
	protected:
		int maths,gujarati,english;
		
		public:
		void get_marks(){
			cout<<"\n Enter marks in maths:";cin>>maths;
		    cout<<"\n enter marks in gujarati :";cin>>gujarati;
		    cout<<"\n enter marks in english :";cin>>english;		
		}
};
class print_marks_sheet:public student,public marks{
	public:
		void print_marksheet(){
			cout<<"\n name :"<<name;
			cout<<"\n Rollno :"<<rollno;
			cout<<"\n school name :"<<school_name;
			cout<<"\n standard :"<<standard;
			cout<<"\n \n maths :"<<maths<<"\n gujarati :"<<gujarati<<"\n english :"<<english;
			cout<<"\n\n total marks :"<<maths+gujarati+english;
			cout<<"\n percentge :"<<(maths+gujarati+english)/3<<"%";
	}
};
int main(){
	print_marks_sheet p1;
	p1.get_name();
	p1.get_marks();
	p1.print_marksheet();
}
