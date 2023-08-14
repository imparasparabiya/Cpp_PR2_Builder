#include<iostream>
#include<string.h>
using namespace std;

class HighSchool{
	
	private:
		
		int id;
		char name[100];
		int roll_no;
		int std;
		int age;
		char contact[10];
		static char edu_insti_name[100];
		char add[50];
	public:
	
	void getHigh(){
		cout<<"Enter Student Id = ";
		cin>>id;
		cout<<"Enter Student Name = ";
		cin>>name;
		cout<<"Enter Student Roll No. = ";
		cin>>roll_no;
		cout<<"Enter Student Standard = ";
		cin>>std;
		cout<<"Enter Student Age = ";
		cin>>age;
		cout<<"Enter Student Contact = ";
		cin>>contact;
		cout<<"Enter Student Address = ";
		cin>>add;
		
		cout<<endl<<"*****High School Student Data*****"<<endl<<endl;
		setHigh();
	}	
	void setHigh(){
		
		cout<<"Student ID : "<<id<<endl
			<<"Student Name : "<<name<<endl
			<<"Student Roll no. : "<<roll_no<<endl
			<<"Student Standard : "<<std<<endl
			<<"Student Age : "<<age<<endl
			<<"Student High School Name : "<<edu_insti_name<<endl
			<<"Student Contact No. : "<<contact<<endl
			<<"Student Address : "<<add<<endl;
	}
		
};
class College{
	private:
		
		int id;
		char name[100];
		int roll_no;
		int std;
		int age;
		char contact[10];
		static char edu_insti_name[100];
		char add[50];
	public:
	
	
	void getCollege(){
		
		cout<<"Clg Student ID = ";
		cin>>id;
		cout<<"Clg Student Name = ";
		cin>>name;
		cout<<"Clg Student Roll No. = ";
		cin>>roll_no;
		cout<<"Clg Student College Year = ";
		cin>>std;
		cout<<"Clg Student Age = ";
		cin>>age;
		cout<<"Clg Student Contact no. = ";
		cin>>contact;
		cout<<"Clg Student Address = ";
		cin>>add;
		cout<<endl<<"*****College Student Data*****"<<endl<<endl;   
		setCollege();
		
	}
	void setCollege(){
		cout<<"Clg Student Id : "<<id<<endl
			<<"Clg Student Name : "<<name<<endl
			<<"Clg Student Roll No. : "<<roll_no<<endl
			<<"Clg Student College Year : "<<std<<endl
			<<"Clg Student Age : "<<age<<endl
			<<"College Name : "<<edu_insti_name<<endl
			<<"Clg Student Contact no. : "<<contact<<endl
			<<"Clg Student Address : "<<add<<endl;
	}
	
};
char HighSchool :: edu_insti_name[] = "G.P.B. High School";
char College :: edu_insti_name[] = "Saurashtra University";
int main(){
	
	HighSchool h;
	cout<<endl<<"*****High School Student Data Enter*****"<<endl<<endl; 
	  h.getHigh();
	  

	College c;
	cout<<endl<<"*****College Student Data Enter*****"<<endl<<endl;    
	   c.getCollege();
	  
	   
	  
	  
	
	
	
}
