#ifndef MATRIX_HPP__
#define MATRIX_HPP__

#include <iostream>

class Matrix {
    public:
        int m;
    public:
        Matrix(int m);  
        Matrix(const Matrix&);
        Matrix& operator=(const Matrix&);
        Matrix& operator+=(const Matrix&);
        Matrix& operator*=(const Matrix&);
        Matrix& operator*=(const double);
        double norm() const;
        void printMatrix() const;

}

#endif 