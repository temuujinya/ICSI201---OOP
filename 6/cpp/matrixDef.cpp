#include "matrix.h"

int Matrix::getCol(){
    return col;
}

int Matrix::getRow(){
    return row;
}

float Matrix::getValues(int i, int j){
    return values[i][j];
}

void Matrix::setCol(int &b){
    col = b;
}

float Matrix::setValues(int row,int col,float values){
    this->values[row][col]=values;
}

Matrix::Matrix(int row,int col){
    this->col=col;
    this->row=row;
    cout<<"col="<<this->col<<endl;
    cout<<"row="<<this->row<<endl;
    this->values = new float*[row*col];
}

Matrix::~Matrix(){
    delete [] this->values;
}

Matrix Matrix :: operator +(Matrix &a){
    Matrix temp(a.getRow(),a.getCol());
     temp.values = new float*[a.getCol()];
    for (int i = 0; i < a.getCol(); i++){
        temp.values[i] = new float[a.getRow()];
        temp.values[i]=values[i]+a.values[i];
    }

     for(int i=0; i<=a.getRow();i++){
         for(int j=0; j<=a.getCol();j++){
             float valuesThis =this->getValues(i,j);
             temp.values[i][j]=valuesThis+a.values[i][j];
         }
     }
     return temp;
}

void display(Matrix &a){
    for(int i=0; i<=a.getRow();i++){
         for(int j=0; j<=a.getCol();j++){
            //  cout<<"a["<<i<<"]["<<j<<"]="<<a.getValues[i][j];
             cout<<"a["<<i<<"]["<<j<<"]="<<a.getValues(i,j);
         }
         cout<<endl;
     }
}