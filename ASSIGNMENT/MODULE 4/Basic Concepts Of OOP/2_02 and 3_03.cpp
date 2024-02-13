/*bank system*/
#include<iostream>
using namespace std;
class account{
	private:       //data
	int acc_no;
	float balance;
	char acc_type,name[20];
	
	public:      //functionality
	void get_value(){
		cout<<"enter account number:";cin>>acc_no;
		cout<<"\n enter account type s(saving)and c(current):";cin>>acc_type;
		cout<<"\n enter account holder name:";cin>>name;
		cout<<"\n enter account balance:";cin>>balance;
	}
	void print_value(){
		cout<<" enter account number:"<<acc_no;
		cout<<"\n enter account type saving and current:"<<acc_type;
		cout<<"\n enter account holder name:"<<name;
		cout<<"\n enter account balance:"<<balance;
	}
	void deposite(){
		int amount;
		cout<<"\n enter amount to deposite:";cin>>amount;
		balance=balance+amount;
	}
	void withdrow(){
		int w;
		cout<<"\n enter amount to withdrow:";cin>>w;
		if(balance>w){
		balance=balance-w;
	}else{
		cout<<"\n insufficient balance:";
	}
	}
};
int main(){
     int a,b;
     account a1;
     again:
     cout<<"\n 1).open account \n2).deposite \n3).withdrow \n4).print data\n\t";cin>>a;
     switch(a){
     	case 1:{a1.get_value();
			break;
		 }
		 case 2:{a1.deposite();
			break;
		 }
		 case 3:{a1.withdrow();
			break;
		 }
		 case 4:{a1.print_value();
			break;
		 }
	 }
	 cout<<"\n 1.exit \n 2.banking\n\t";cin>>b;
		 if(b==2){
		 	goto again;
		 }
}
