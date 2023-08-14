#include<iostream>
#include<string>
using namespace std;

class Employes{
	
	private :
		
		int id;
		char name[100];
		char post[100];
		int salary[10];
		int exprience[10];
		char address[100];
		char maill[50];
		char contact[10];
	public :	
	
	void setemp(){
		cout<<"Enter Employee ID = ";
		cin>>id;
		cout<<"Enter Emploee Name = ";
		cin>>name;
		cout<<"Enter Employee Post = ";
		cin>>post;
		cout<<"Enter Empoloyee Salary = ";
		cin>>salary[10];
		cout<<"Enter Employee Exprience Year = ";
		cin>>exprience[10];
		cout<<"Enter Employee Address = ";
		cin>>address;
		cout<<"Enter Employee Mail ID = ";
		cin>>maill;
		cout<<"Enter Employee Contact = ";
		cin>>contact;
		
	}
	void getemp(){
		
		cout<<"Employee ID = "<<id<<endl
		    <<"Employee Name = "<<name<<endl
		    <<"Employee Post = "<<post<<endl
		    <<"Employee Salary = "<<salary<<endl
		    <<"Employee Exprience = "<<exprience<<endl
		    <<"Employee Address = "<<address<<endl
		    <<"Employee Mail ID = "<<maill<<endl
		    <<"Employee Contact no. = "<<contact<<endl;
	}
		
	
};
int main(){
	
	Employes e,e1,e2,e3,e4;
	
	e.setemp();
	e1.setemp();
	e2.setemp();
	e3.setemp();
	e4.setemp();
	
	cout<<endl<<"-----Employe Data Print-----"<<endl<<endl;
	
	e.getemp();
	e1.getemp();
	e2.getemp();
	e3.getemp();
	e4.getemp();
	
	
	return 0;
}
