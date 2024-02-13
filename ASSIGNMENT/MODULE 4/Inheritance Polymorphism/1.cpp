/*assume a class cricketer is declared.declare a derived class batsman from cricketer.data member of batsman.
total run,average runs and best performance.member function input data,calculate average runs,display data.(single inheritance)*/
#include<iostream>
using namespace std;
class Cricketer{
	protected:                  //data
	int match,match2,match3;
	char name[20];
	public:                     //methods
	void get_data(){
		cout<<"\n Enter name :";cin>>name;
		cout<<"\n Enter match run :";cin>>match;
		cout<<"\n Enter match2 run :";cin>>match2;
		cout<<"\n Enter match3 run :";cin>>match3;
	}
};
class Batsman:public Cricketer{
	public:
		int Total,Average;
		void Total_run(){
			Total=match+match2+match3;
		}
		void Average_run(){
			Average=(match+match2+match3)/3;
		}
		void print_data(){
			cout<<"\n Total run ="<<Total;
			cout<<"\n Average run ="<<Average;
		}
		void Performance(){
			if(match>match2){
				if(match>match3){
					cout<<"\n Best Performance score is ="<<match;
				}else{
					cout<<"\n Best Performance score is ="<<match3;
				}
			}else{
				if(match2>match3){
					cout<<"\n Best Performance score is ="<<match2;
				}else{
					cout<<"\n Best Performance score is ="<<match3;
				}
			}
		}
};
int main(){
	Batsman B1;
	B1.get_data();
	B1.Total_run();
	B1.Average_run();
	B1.print_data();
	B1.Performance();
}
