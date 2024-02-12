/*
Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/
#include <iostream>

class Date 	
{
	private:
    	int day;
    	int month;
    	int year;

	public:
    	Date(int d, int m, int y) : day(d), month(m), year(y) {}

    	void setDay(int d) 
		{
       		day = d;
    	}

    	void setMonth(int m) 
		{
        	month = m;
    	}

    	void setYear(int y) 
		{
        	year = y;
   	 	}

    	int getDay() const
		{
        	return day;
    	}

    	int getMonth() const 
		{
        	return month;
    	}

    	int getYear() const 
		{
        	return year;
    	}

    	bool isValidDate() const 
		{
        	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) 
			{
            	return false;
        	}

        	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
			{
            	return false;
        	}

        	if (month == 2) 
			{
            	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
				{
                	return day <= 29;
            	} 
			else 
			{
                return day <= 28;
            }
        }
		return true;
    }
};

main() 
{
    Date myDate(24, 12, 2023);

    myDate.setDay(25);
    myDate.setMonth(2);
    myDate.setYear(2022);

    std::cout << "Day: " << myDate.getDay() << std::endl;
    std::cout << "Month: " << myDate.getMonth() << std::endl;
    std::cout << "Year: " << myDate.getYear() << std::endl;
    
    if (myDate.isValidDate()) 
	{
        std::cout << "The date is valid." << std::endl;
    } 
	else 
	{
        std::cout << "The date is not valid." << std::endl;
    }
}
