/*difference between structure and union*/
#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[20];
	float per;
};
union employe{
	int empno;
	char name[20];
	float salary;
};
int main(){
	struct student s1;
	
	strcpy(s1.name,"priyank");
	s1.rollno=25;
	s1.per=66.66;
	
	printf("\%d",s1.name);
	printf("\n %d",s1.rollno);
	printf("\n %.2f",s1.per);

union employe s2;
	s2.empno=12;
	printf("\n %d",s2.empno);
	strcpy(s2.name,"priyank");
	printf("\n %c",s2.name);
	s2.salary=25;
	printf("\n %f",s2.salary);
}
