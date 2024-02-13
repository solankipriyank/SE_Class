/*concatenate the two string using operator overloading*/
#include<iostream>
#include<string>
using namespace std;
class strings{
	public:
		string A;
		void get_data(){
			cout<<"\n enter string :";
			getline(cin,A);
		}
		strings operator+(strings o){
			strings temp;
			temp.A=A+" "+o.A;
			return (temp);
		}
		void print_data(){
			cout<<"\n "<<A;
		}
};
int main(){
	strings s1,s2,sum;
	s1.get_data();
	s2.get_data();
	sum=s1+s2;
	sum.print_data();
}
