/*
Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor.
*/
#include <iostream>
#include <string>
using namespace std;

class Employee 
{

    std::string name;
    int employeeID;
    double salary;

	public:
   		Employee(const std::string& empName, int empID, double empSalary): name(empName), employeeID(empID), salary(empSalary) {}

    	std::string getName() const 
		{
        	return name;
    	}

    	int getEmployeeID() const 
		{
        	return employeeID;
    	}

    	double getSalary() const 	
		{
       		 return salary;
    	}

    	void setSalary(double performanceScore) 
		{
        if (performanceScore > 0.8) 
		{
            salary *= 1.1; 
        } 
		else if (performanceScore > 0.6) 
		{
            salary *= 1.05; 
        } 
		else 
		{
            salary *= 0.95; 
        }
    }
};
main() 
{
  
    Employee emp1("RITU", 1001, 50000.0);

    std::cout << "Employee Name: " << emp1.getName() << std::endl;
    std::cout << "Employee ID: " << emp1.getEmployeeID() << std::endl;
    std::cout << "Initial Salary: $" << emp1.getSalary() << std::endl;

    double performanceScore = 0.75;
    emp1.setSalary(performanceScore);

    std::cout << "\nAfter Performance Evaluation:" << std::endl;
    std::cout << "Employee Name: " << emp1.getName() << std::endl;
    std::cout << "Employee ID: " << emp1.getEmployeeID() << std::endl;
    std::cout << "Updated Salary: $" << emp1.getSalary() << std::endl;

}
