/*implement a class called date that has private member variables for day,month and year .include member function 
to set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
using namespace std;
class Date{
	private:
		int Day,Month,Year,Leap;
		int valid_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		public:
			void get_data(){
				cout<<"\n enter day :";cin>>Day;
			    cout<<"\n enter month :";cin>>Month;
			    cout<<"\n enter year :";cin>>Year;
			}
			void validate(){
				Leap=Leap_year();
				if(Leap==1){
					if(Month==2){
						if(Day<=valid_day[Month]+1){
							cout<<"\n "<<Day<<"\n "<<Month<<"\n"<<Year;
							cout<<"\n Date is valid :";
						}else{
							cout<<"\n Date is not valid :";
						}
					}
				}else{
					if(Day<=valid_day[Month]){
						cout<<"\n"<<Day<<"\n"<<Month<<"\n "<<Year;
						cout<<"\n Date is valid";
					}
					else{
						cout<<"\n Date is not valid";
					}
				}
			}
			int Leap_year(){
				if((Year%4==0 && Year%100 !=0) || (Year%400 == 0)){
					return 1;
				}else {
					return 0;
				}
			}
		
};
int main(){
	Date d1;
	d1.get_data();
	d1.validate();
}
