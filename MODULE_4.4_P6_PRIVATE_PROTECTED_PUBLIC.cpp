/*
Write a C++ Program to show access to Private Public and Protected using Inheritance
*/

#include <iostream>
using namespace std;
class Base 
{
private:
    int privateMember;

protected:
    int protectedMember;

public:
    int publicMember;

    Base(int privateVal, int protectedVal, int publicVal) : privateMember(privateVal), protectedMember(protectedVal), publicMember(publicVal) {}

    void displayInfo() 
	{
        cout << "Private Member: " << privateMember <<endl;
        cout << "Protected Member: " << protectedMember << endl;
        cout << "Public Member: " << publicMember << endl;
    }
};

class Derived : public Base 
{
public:
    Derived(int privateVal, int protectedVal, int publicVal) : Base(privateVal, protectedVal, publicVal) {}

    void accessMembers() 
	{
        cout << "In Derived Class:" << endl;
        cout << "Public Member (Accessed directly): " << publicMember << endl;
        cout << "Protected Member (Accessed from Derived Class): " << protectedMember << endl;
    }
};

int main()
{
    Derived derivedObj(1, 2, 3);

    derivedObj.accessMembers();

    std::cout << "\nn Through Base Class:" << std::endl;
    derivedObj.displayInfo();
}

