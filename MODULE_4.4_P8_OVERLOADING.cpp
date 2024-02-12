//To demostrate Method Overloading.

#include<iostream>
using namespace std;

class operation
{
	int n1, n2;
	double n3, n4;
	int n5,n6,n7;
	float n8,n9;
	
	
	public :
			void m_operation(int a, int b)
			{
				n1=a;
				n2=b;		
			}
			
		
			
			void m_operation(double c, double d)
			{
				n3=c;
				n4=d;
			
			}
			void m_operation(int e, int f, int g)
			{
				n5=e;
				n6=f;
				n7=g;
			}
			void m_operation(float h,float i)
			{
				n8=h;
				n9=i;
			}
			
			void printdata()
			{
				cout<<"\n\n\t n1 + n2 = "<<n1+n2;
				cout<<"\n\n\t n3 - n4 = "<<n3-n4;
				cout<<"\n\n\t n5 * n6 * n7 = "<<n5*n6*n7;
				cout<<"\n\n\t n8 / n9 = "<<n8/n9;
			}
				
};

int main()
{
	int a,b;
	double c,d;
	int e,f,g;
	float h,i;
	
	a=10;
	b=20;
	
	c=90;
	d=60;
	
	
	e=4;
	f=6;
	g=8;

	h=25.65;
	i=45.45;
	
	operation O;
	O.m_operation(a,b);
	O.m_operation(c,d); 
	O.m_operation(e,f,g); 
	O.m_operation(h,i);
	
	O.printdata();
}
