#include<iostream>

using namespace std;

class Matrix{
    public:
        int row;
        int col;
        float *values;

    public:
    Matrix(int row,int col);
    Matrix* operator +(Matrix &a);
    Matrix* operator +(float &a);
    Matrix* operator *(Matrix &a);
    Matrix* operator -(Matrix &a);
    void operator =(Matrix &a);
    ~Matrix();
    void display();
    int getCol();
    int getRow();
    float* getAllValuess();
    float getValues(int *row, int *col);

    void setAll(int *row, int *col, float *values);
    void setRow(int *row);
    void setCol(int *col);
    void setValues(int *row, int *col, float *values);


    
};

