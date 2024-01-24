#include<iostream>
#include<string>
using namespace std;
            //variable declaration

string a;
char b[20],c[40];
int i,j;
            //function declaration
    void reverse_str();
    void concatenation();
    void palindrome();
    void copy_str();
    void str_length();
    void char_freq_in_str();
    void vowel_cons();
    void space_digit();
    
int main(){
	int selection,b;
	cout<<"\n Enter string:";
	getline(cin,a);
	again:        //declare(repeat:)to use goto function
	cout<<"\n 1).reverse \n 2).concatenation \n 3).palindrome \n 4).copy sttring \n 5).length of string \n 6).frequency of character in string \n 7).number of vowel and consonant \n 8).number of space and digit \n";
	cin>>selection;
	
	switch(selection){
	case 1:{reverse_str();break;}
	case 2:{concatenation();break;}
	case 3:{palindrome();break;}
	case 4:{copy_str();break;}
	case 5:{str_length();break;}
	case 6:{char_freq_in_str();break;}
	case 7:{vowel_cons();break;}
	case 8:{space_digit();break;}                  
	}
	cout<<"\n\n1).exit\n 2). continue\n\t";
	cin>>b;
	if(b==2){
		goto again;
	}
}
void reverse_str(){
	int m=0;
	for(i=0;i<=a[i]!='\0';i++){
		m++;
	}
	m=m-1;
	for(i=0;i<=a[i]!='\0';i++){
        b[i]=a[m];
		m--;
	}
	cout<<"\n reverse of string is "<<b;
}
void concatenation(){
	int m=0;
	cout<<"\n Enter another string to concatenate:";cin>>b;
	for(i=0;a[i]!='\0';i++){
		c[i]=a[i];
		m++;
	}
	for(i=0;b[i]!='\0';i++){
		c[m++]=b[i];
	}
	c[m]='\0';
	cout<<"\n concatenate of two string is"<<c;
}
void palindrome(){
	int m,n;
	for(i=0;a[i]!='\0';i++){
		m++;
	}
	m=m-1;
	for(i=0;i<=a[i]!='\0';i++){
		b[i]=a[m];
		m--;
	}
	for(i=0;i<=a[i]!='\0';i++){
		if(a[i]!=b[i]){
			n=1;
		}
	}
	(n==0)?(cout<<"\n palindrome"):(cout<<"\n not palindrome");
}
void copy_str(){
		for(i=0;a[i]!='\0';i++){
		b[i]=a[i];
	}
	cout<<b;
	cout<<"\n string a is copy to string b";
}
void str_length(){
	int count=0;
		for(i=0;a[i]!='\0';i++){
		count++;
	}
	cout<<"\n length of string is :"<<count;
}
void char_freq_in_str(){
	char freq;
	int m=0;
	cout<<"enter character to count:";cin>>freq;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==freq){
			m++;
		}
	}
	cout<<"\n character "<<freq<<"is repeated"<<m<<"times";
}
void vowel_cons(){
	int m=0,n=0;
	for(i=0;a[i]!='\0';i++){
		if((a[i]>='a' && a[i<='z']) || (a[i]>='A'  && a[i<='Z'])){
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
			    m++;	
			}else{
				n++;
			}
		}
	}
	cout<<"\n total vowel is :"<<m;
	cout<<"\n total consonant is :"<<n;
}
void space_digit(){
	int m=0,n=0;
	for(i=0;a[i]!='\0';i++){
     if(a[i]>='0' && a[i]<='9'){
        m++;
     }
     else if(a[i]==' ') {
        n++;
     }
  }
  cout<<"\n total "<<m<<"digit are in string";
  cout<<"\n total "<<n<<"space are in string";

}



