/*
Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/
#include<iostream>
using namespace std;

class Car
{	
	string company,model;
	int year;	
	public: 	
		Car()
		{
			company = "Royal Enfield";
			model ="Himalayan 450";
			year=2023;
		}
		void Display()
		{
			cout<<"\n\n Company Name of Bike : "<<company;
			cout<<"\n\n Model Name of Bike : "<<model;
			cout<<"\n\n Year in which Bike was launched : "<<year;				
		}
};
main()
{
	Car C;
	C.Display();
}
