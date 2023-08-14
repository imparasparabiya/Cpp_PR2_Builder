#include<iostream>
#include<string.h>
using namespace std;

class Tours{
	private :
		char place[100];
		char city[100];
	static	char state[50];
	static	char country[50];
	public :	
	
	void setData(){
		cout<<"Place Name = ";
		cin>>place;
		cout<<"City Name = ";
		cin>>city;
		
	}
	void getData(){
		
		cout<<"Place is : "<<place<<endl
		    <<"City is : "<<city<<endl;
	}
	static void print(){
		
		cout<<"State is : "<<state<<endl
		    <<"Country is : "<<country<<endl;
	}
	
};
char Tours :: state[] = "Gujarat";
char Tours :: country[] = "India";

int main(){
	Tours t;
	cout<<"-----Enter Only Gujarat State Tour Place-----"<<endl;
	t.setData();
	cout<<endl<<"*****Tour Place Data*****"<<endl;
	t.getData();
	t.print();
	
	
	return 0;
}  
