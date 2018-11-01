#include<iostream>

using namespace std;

class Matrix{
    private:
        int row;
        int col;
        float **values;

    public:
    Matrix(int row,int col);
    Matrix operator +(Matrix &a);
    ~Matrix();
    int getCol();
    int getRow();
    float setValues(int row,int col,float values);
    void setCol(int &b);
    float getValues(int i, int j);
};

void display(Matrix &a);