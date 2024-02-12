/*
Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include<iostream>
using namespace std;

class Triangle
{
	float length_1,length_2,length_3;	
	public:
		 	Triangle(float len_1, float len_2,float len_3)
		 	{
		 		length_1=len_1;
		 		length_2=len_2;
		 		length_3=len_3;
			 }
			 
			 void determineType() 
			 {
    			if (length_1 == length_2 && length_2 == length_3) 
				 { 
      				cout << "\n\n This is an Equilateral Triangle!!!!!!" << endl;
    			 }
				 else if (length_1 == length_2 || length_1 == length_3 || length_1 == length_3) 
				 {
				 	cout << "\n\n This is an Isosceles Triangle!!!!!!!" << endl;
    			 }
				  else
				 {
      				cout << "\n\n This is a Scalene Triangle!!!!!!!!!" << endl;
    			 }
			 }
};
main()
{
	float len_1,len_2,len_3;
				cout<<"\n\n Enter the length of side A :";
				cin>>len_1;
				cout<<"\n\n Enter the length of side B :";
				cin>>len_2;
				cout<<"\n\n Enter the length of side C :";
				cin>>len_3;
	Triangle T1(len_1,len_2,len_3);
	//cout<<"\n\n**************************************************************************************";
	T1.determineType();
}
