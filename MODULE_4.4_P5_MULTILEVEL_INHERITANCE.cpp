/*
Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
class student
	rollnumber;
class test
	marks;
class result;
	total marks;	
*/
#include<iostream>
using namespace std;
class student
{
	int rollnumber;
	
	public:
		student()
		{
			rollnumber=111;
		}
		void print_student_data()
		{
			cout<<"\n\n\t student rollnuber : "<<rollnumber;
		}
};
class test : public student
{
	int s1_marks,s2_marks;
	
	public:
		test()
		{
			s1_marks=87;
			s2_marks=91;
		}
		void print_test_data()
		{
				
			cout<<"\n\n\t subject1 marks = "<<s1_marks;
			cout<<"\n\n\t subject2 marks = "<<s2_marks;
		}
};
class result: public test 
{
	int total_marks,s1_marks,s2_marks;
	public:
		result()
		{
			s1_marks=87;
			s2_marks=91;
			
			total_marks=s1_marks + s2_marks;	
		}
		void print_result_data()
		{
			cout<<"\n\n\t total marks = "<<total_marks;
		}
};
main()
{
	result robj;
	robj.print_student_data();
	robj.print_test_data();
	robj.print_result_data();
}
