/*
Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/
#include<iostream>
using namespace std;
class person
{
	int age;
	string country,name;
	
	public:
		void get_data()
		{
			name = "Ritu Kadiya";
			age = 24;
			country = "India";
		}
		void set_data()
		{
			cout<<"\n\n\t person's name : "<<name;
			cout<<"\n\n\t person's age : "<<age;
			cout<<"\n\n\t country : "<<country;
		}
};
main()
{
	person Pobj;
	Pobj.get_data();
	Pobj.set_data();
}

