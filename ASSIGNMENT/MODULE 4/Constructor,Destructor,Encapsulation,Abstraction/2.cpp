/*addition,substraction,multipliction,division using constructor*/
#include<iostream>
using namespace std;
class calculator{
	private:             //data
	int y,p;
	public:                //funcionality
	calculator(){
		cout<<"\n Enter value is y :";cin>>y;
		cout<<"\n Enter value is p :";cin>>p;
	}
	int sum(){
		return y+p;
	}
	int sub(){
		return y-p;
	}
	int mul(){
		return y*p;
	}
	int div(){
		return y/p;
	}
};
int main(){
	calculator c1;
    cout<<"\n sum of two value is :"<<c1.sum();
	cout<<"\n substraction of two value is :"<<c1.sub();
	cout<<"\n multiplication of two value is :"<<c1.mul();
	cout<<"\n division of two value is :"<<
	c1.div();
}
