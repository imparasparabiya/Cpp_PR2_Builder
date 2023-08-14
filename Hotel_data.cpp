#include<iostream>
#include<string.h>
using namespace std;

class Hotel{
	private:
		int id;
		char name[100];
		char type[50];
		int staff_size;
		int rooms;
		char establish_year[20];
		char add[100];
		int rating;
		char website[100];
	public:	
	
	void setHotel(int id, char name[], char type[], int staff_size, int rooms, char establish_year[],char add[], int rating, char website[]){
		   this->id = id;
		   strcpy(this->name,name);
		   strcpy(this->type,type);
		   this->staff_size = staff_size;
		   this->rooms = rooms;
		   strcpy(this->establish_year,establish_year);
		   strcpy(this->add,add);
		   this->rating = rating;
		   strcpy(this->website,website);
		   
		   
		 
	}
	void getHotel(){
		
		cout<<"Hotel Id is : "<<id<<endl
		    <<"Hotel Name is : "<<name<<endl
		    <<"Hotel Type ( Veg or Non Veg ) is : "<<type<<endl
		    <<"Hotel Staff Members : "<<staff_size<<endl
		    <<"Hotel Room's : "<<rooms<<endl
		    <<"Hotel Establish Year is : "<<establish_year<<endl
		    <<"Hotel Address is : "<<add<<endl
		    <<"Hotel Rating ( 0 to 10 ) is : "<<rating<<endl
		    <<"Hotel Web Site is : "<<website<<endl;
	}
		
};
int main(){
	
	Hotel h;
	
	h.setHotel(9,"Prince Hotel","Pure Veg",500,100,"Since 1998","Surat",10,"www.princehotel1998.in");
	h.getHotel();
	
	
	return 0;
}
