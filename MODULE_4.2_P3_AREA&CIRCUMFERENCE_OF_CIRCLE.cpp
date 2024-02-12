/*
Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/
#include<iostream>
using namespace std;
class circle
{
	float radius,area,circumference;
	float x, y;
	
	public:
		void get_data()
		{
			cout<<"\n Enter radius : ";
				cin >> radius;
		}
		void print_data()
		{
			area=(3.14*radius*radius);
			circumference= 2* 3.14*radius;
			cout<<"\n\n\tRadius = "<<radius;
			cout<<"\n\n\tArea of circle = "<<area;
			cout<<"\n\n\t circumferance of circle = "<<circumference;
		
		}
		
};
main()
{
	circle C;
	C.get_data();
	C.print_data();
	
}





