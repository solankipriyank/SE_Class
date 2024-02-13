/*show access tp private public and protected using inheritance*/
#include<iostream>
using namespace std;
class P{
	private:
		int a=10;
		void print_private(){
			cout<<"\n private in P";
		}
		protected:
			int b=20;
			void print_protected(){
				cout<<"\n protected in P";
			}
			public:
				int c=30;
				void print_public(){
					cout<<"\n public in P";
				}
};
class Y:public P{
	public:
		void print_A(){
			cout<<"\n public in A";
		}
		void change_data(){
			b=40;
			c=60;
			cout<<"\n b= "<<b;
			cout<<"\n c= "<<c;
		}
};
class S:public Y{
	void print_B(){
	cout<<"\n public in B";
	}
};
int main(){
	P p1;
	Y y1;
	S s1;
	p1.print_public();
	y1.print_public();
	s1.print_public();
	y1.print_A();
	y1.c=100;
	s1.print_A();
	y1.change_data();
}
