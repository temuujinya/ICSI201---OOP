#include<iostream>

using namespace std;

class Matrix{
    public:
        int row,col;
        float *values;

    public:
    Matrix(int row,int col);
    Matrix operator +(Matrix &a);
    Matrix operator +(float &a);
    Matrix operator *(Matrix &a);
    Matrix operator -(Matrix &a);
    //TODO: Заалт буцаадаг болгох a=a=b;
    void operator =(Matrix a);
    void operator ++(int);
    void operator --(int);
    void operator +=(Matrix &a);
    void operator -=(Matrix &a);
    void operator *=(Matrix &a);
    void operator !(Matrix &a);
    float* operator [](int a);

    ~Matrix();
    void display();
    int getCol();
    int getRow();
    float* getAllValuess();
    float getValues(int *row, int *col);
    float* getValues2(int *row, int *col);


    void setAll(int *row, int *col, float *values);
    void setRow(int *row);
    void setCol(int *col);
    void setValues(int *row, int *col, float *values);


    
};
