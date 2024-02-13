/*two 1D matrix addition using operator overloading */
#include<iostream>
using namespace std;
class P{
	public:
		int i;
		int b[5];
		void get_matrix(){
			for(i=0;i<5;i++){
				cout<<"b["<<i<<"]=";cin>>b[i];
			}cout<<"\n";
		}
		P operator+(P p1){
			P temp;
			for(i=0;i<5;i++){
				temp.b[i]=b[i]+p1.b[i];
			}
			return (temp);
		}
		void print_data(){
			for(i=0;i<5;i++){
				cout<<"  "<<b[i];
			}
		}
};
int main(){
	P y1,y2,sum;
	y1.get_matrix();
	y2.get_matrix();
	sum=y1+y2;
	sum.print_data();
}
