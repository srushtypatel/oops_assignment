/*
Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)

class person:
	name,age;

class student:
	marks;

class teacher:
	salary;
*/
#include<iostream>
using namespace std;
class person
{
	int p_age;
	string p_name;
	
	public:
		person()
		{
			p_name="Ritu";
			p_age=24;
		}
		void print_person()
		{
			cout<<"\n\n\t Person Name : "<<p_name;
			cout<<"\n\n\t person age : "<<p_age;
		}
};
class student
{
	int s_percentage;
	
	public:
		student()
		{
			s_percentage=98;
		}
		void print_student()
		{
			cout<<"\n\n\t Student Percentage : "<<s_percentage;
		}
};
class Teacher:public person,public student
{
	int sallary;
	
	public:
		Teacher()
		{
			sallary=35000;
		}
		void print_Teacher()
		{
			cout<<"\n\n\t Teacher sallary : "<<sallary;
		}
};
main()
{
	Teacher tobj;
	tobj.print_person();
	tobj.print_student();
	tobj.print_Teacher();
}

