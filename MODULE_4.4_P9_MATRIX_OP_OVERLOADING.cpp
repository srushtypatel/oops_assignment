// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>

class Matrix {
private:
    int size;
    int *data;

public:
    Matrix(int s) : size(s), data(new int[s]) {}

    ~Matrix() 
	{
        delete[] data;
    }

    Matrix operator+(const Matrix& other) const 
	{
        if (size != other.size) 
		{
            std::cerr << "Matrix size mismatch for addition\n";
            return Matrix(0);
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) 
		{
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    void display() const {
        for (int i = 0; i < size; ++i) 
		{
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() 
{
   
    Matrix matrix1(5);
    Matrix matrix2(5);

    for (int i = 0; i < 5; ++i) 
	{
        matrix1[i] = i + 1;
        matrix2[i] = i * 2;
    }

    std::cout << "Matrix 1: ";
    matrix1.display();

    std::cout << "Matrix 2: ";
    matrix2.display();

    Matrix result = matrix1 + matrix2;

    std::cout << "Result: ";
    result.display();

    return 0;
}
