/*
Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation
*/
#include <iostream>
#include <string>
using namespace std;
class StudentMarks 
{
    string name;
    string className;
    int rollNumber;
    float marks;

public:
    StudentMarks(string n, string c, int roll, float m) : name(n), className(c), rollNumber(roll), marks(m) {}
    char calculateGrade() 
	{
        if (marks >= 90) 
		{
            return 'A';
        } 
		else if (marks >= 80) 
		{
            return 'B';
        } 
		else if (marks >= 70) 
		{
            return 'C';
        } 
		else if (marks >= 60) 
		{
            return 'D';
        } 
		else 
		{
            return 'F';
        }
    }
    void displayInfo() 
	{
        cout << "Name: " << name <<endl;
        cout << "Class: " << className <<endl;
        cout << "Roll Number: " << rollNumber <<endl;
        cout << "Marks: " << marks <<endl;
        cout << "Grade: " << calculateGrade() <<endl;
    }
};
class Student 
{
private:
    StudentMarks* studentMarks;

public:
    Student(StudentMarks* sm) : studentMarks(sm) {}

    void displayStudentInfo() 
	{
        studentMarks->displayInfo();
    }
};

main() 
{
 
    StudentMarks student1("Ritu Kadiya", "12th ", 101, 85.5);

    Student student(&student1);

    student.displayStudentInfo();
}
