/*simple calculator using class*/
#include<iostream>
using namespace std;
class calculator{
	public:
		//data 
		int a,b;
			void get_data(){
				cout<<"enter value of a:";
				cin>>a;
				cout<<"enter value of b:";
				cin>>b;
			}
			void sum(){
				cout<<"\nsum of a and b:"<<a+b;
			}
			void sub(){
				cout<<"\nsubstraction of a and b:"<<a-b;
		    }
		    void mul(){
				cout<<"\nmultipliction of a and b:"<<a*b;
			}
			void div(){
				cout<<"\ndivison of a and b:"<<a/b;
			}
};
int main(){
	calculator s1;
	s1.get_data();
	s1.sum();
	s1.sub();
	s1.mul();
	s1.div();
}

