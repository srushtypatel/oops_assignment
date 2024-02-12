/*
Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
? Rectangle: Area * breadth
? Triangle: ? *Area* breadth
? Circle: Pi * Area *Area
*/
#include<iostream>
using namespace std; 
class base
{
	public:
		int ch,b,h,r,l,w;
		float area;

	void getdata()
	{

		cout<<"\t 1. Triangle\n";
		cout<<"\t 2. Cricle\n";
		cout<<"\t 3. Rectangle\n";

		cout<<"Select your choice:";
		cin>>ch;
	
	}
};
class letdata : public base
{
	public:
	void sdata()
	{
		if (ch==1) 
		{
			cout<<"Enter Base & Height:";
			cin>>b>>h;
			area=(b*h)/2;
			cout<<"Area of Triangle:"<<area;
		}
		else if (ch==2) 
		{
			cout<<"Enter radius of circle:";
			cin>>r;
			area=3.142*r*r;
			cout<<"Area of circle:"<<area;
		}
		else if (ch==3) 
		{
			cout<<"Enter Length & Width:";
			cin>>l>>w;
			area=l*w;
	    	cout<<"Area of Rectangle:"<<area;
		}
		else
		{
			cout<<"invalid output";
		}	
	}
};

main()
{
	letdata d;
	d.getdata();
	d.sdata();
}
