/*
Write a C++ Program to find Area of Rectangle using inheritance.
*/
#include <iostream>
using namespace std;
class rectangle
{
	public:
		int width;
    	int height;
    	void inputDimensions() 
		{
        	cout << "Enter width: ";
        	cin >> width;

        	cout << "Enter height: ";
        	cin >> height;
    	}
};


class Rectangle : public rectangle
{
	public:
		int area;
    	void calculateArea() 
		{
    	    area = 0.5*(width * height);
    	    cout << "Area of Rectangle: " << area <<endl;
    	}
};

main() 
{
    Rectangle R;
	R.inputDimensions();
	R.calculateArea();
}

