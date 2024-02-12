/*
Write a program of to sort the array using templates.
*/
#include <iostream>
using namespace std; 

template <typename T>
void swap(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Sort(T arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
	{
        for (int j = 0; j < size - i - 1; ++j) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

main() 
{
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Before sorting (integers): ";
    printArray(intArray, intArraySize);

    Sort(intArray, intArraySize);

    std::cout << "After sorting (integers): ";
    printArray(intArray, intArraySize);

}
