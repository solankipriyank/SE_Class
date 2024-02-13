/*create a class called triangle that has private member variables for the lengths of its three sides.implement 
member function to determine if the triangle is equilateral,isosceles,or scalene */
#include<iostream>
using namespace std;
class triangle{
	private:
		int a1,a2,a3;
		public:
			void get_data(){
				cout<<"\n enter first side triangle :";cin>>a1;
		    	cout<<"\n enter second side triangle :";cin>>a2;
			    cout<<"\n enter third side triangle :";cin>>a3;
			}
			void determine(){
				if(a1==a2 && a2==a3){
					cout<<"\n triangle is equilateral";
				}else if(a1==a2 || a2==a3){
					cout<<"\n triangle is isosceles ";
				}else {
					cout<<"\n triangle is scelene";
				}
			}
};
int main(){
	triangle t1;
	t1.get_data();
	t1.determine();
}
