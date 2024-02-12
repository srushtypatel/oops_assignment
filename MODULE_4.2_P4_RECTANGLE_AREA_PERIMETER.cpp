/*
Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.
*/
#include<iostream>
using namespace std;
class rectangle
{
	int h,w, area , perimeter;
	
	public:
		void get_data()
		{
			cout<<"\n\n\t Enter a height = ";
			cin>>h;
			cout<<"\n\n\t Enter a width = ";
			cin>>w;
		}
		void print_data()
		{
			area=0.5*h*w;
			perimeter=2*(h+w);
			cout<<"\n\n\t Enter a height = "<<h;
			cout<<"\n\n\t Enter a width = "<<w;
			cout<<"\n\n\t Area of rectangle = "<<area;
			cout<<"\n\n\t Perimeter of reactangle = "<<perimeter;
		}
	
};
main()
{
	rectangle R;
	R.get_data();
	R.print_data();
}
