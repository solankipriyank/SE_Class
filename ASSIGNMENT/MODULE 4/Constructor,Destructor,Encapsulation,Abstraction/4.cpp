#include<iostream>
#include<string>
using namespace std;
class account{
	private:     //data
	int acc_no;
	float balance;
	char acc_type;
	string name;
	
	public:     //functionality
	account(int x,float y,char c,string str){
		acc_no=x;
		balance=y;
		acc_type=c;
		name=str;
	}
	void print_value(){
		cout<<"\n account number :"<<acc_no;
		cout<<"\n account balance :"<<balance;
		cout<<"\n account holder name :"<<name;
		cout<<"\n account type saving and cuuent:"<<acc_type;
	}
	void deposite(){
		int amount;
		cout<<"\n enter amount to deposite:";cin>>amount;
		balance=balance+amount;
		cout<<"account balance:"<<balance;
	}
	void withdrow(){
	int w;
	cout<<"\n enter amount to withdrow:";cin>>w;
	if(balance>w){
	balance=balance-w;
	cout<<"account balance:"<<balance;
	}else{
		cout<<"insufficient balance:";
	}
    }
};
int main(){
	int a,b,acc_no_;
	float balance_;
	char acc_type_;
	string name_;
	
	cout<<"\n enter account number:";cin>>acc_no_;
	cout<<"\n enter account balance:";cin>>balance_;
	cout<<"\n enter account type:";cin>>acc_type_;
	cout<<"\n enter account holder name:";cin>>name_;
	
	account a1(acc_no_,balance_,acc_type_,name_);
	again:
		cout<<"\n1).deposite\n2).withdrow\n3).print data\n\t",cin>>a;
		
	switch(a){
		case 1:{a1.deposite();
			break;
		}
		case 2:{a1.withdrow();
			break;
		}
	    case 3:{a1.print_value();
			break;
		}
		}
		
		cout<<"\n\n1).exit\n2).banking\n\t";cin>>b;
		if(b==2){
			goto again;
			
	}
}
