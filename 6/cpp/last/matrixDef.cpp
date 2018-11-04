#include "head.h"

Matrix::Matrix(int row, int col){
    setAll(&row,&col,NULL);
}

Matrix::~Matrix(){
    delete [] values;
    cout<<"object ustlaa"<<endl;
}

Matrix Matrix::operator +(Matrix  &a){
    int row = this->getRow(),
        col = this->getCol();
    Matrix temp(row,col);
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
        float valuesSum= this->getValues(&i,&j)+a.getValues(&i,&j); 
        temp.setValues(&i,&j,&valuesSum);
        }
    }
    return temp;
}

Matrix Matrix::operator +(float &a){
    int row = this->getRow(),
        col = this->getCol();
    Matrix temp(row,col);
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
           float valuesSum= this->getValues(&i,&j)+a; 
           temp.setValues(&i,&j,&valuesSum);
        }
    }
    return temp;
}

Matrix Matrix::operator *(Matrix &a){
    int row = this->getRow(),
        col = this->getCol();
    Matrix temp(row,col);
    int i, j, k;
	for(i = 0; i < row; ++i)
	{
		for(j = 0; j < col; ++j)
		{
            float aa=0;
			for(k=0; k<col; ++k)
			{
                aa+=this->getValues(&i,&k) * a.getValues(&k,&j);
				
			}
            temp.setValues(&i,&j,&aa);
		}
	}
        
    return temp;
}

Matrix Matrix::operator -(Matrix &a){
    int row = this->getRow(),
        col = this->getCol();
    Matrix temp(row,col);
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
           float valuesSum= this->getValues(&i,&j)-a.getValues(&i,&j); 
           temp.setValues(&i,&j,&valuesSum);
        }
    }
    return temp;
}

Matrix& Matrix::operator =(Matrix a){
    int row=a.getRow(),
        col=a.getCol();
    this->setRow(&row);
    this->setCol(&col);
    delete [] values;

    this->values = new float(col*row);
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
            float values =a.getValues(&i,&j);
            this->setValues(&i,&j,&values);
        }
    }
    //Эсвэл параметрээр орж ирсэн объектыг буцааж болно
    //учир нь утга оноож бөгөөд утга адил байна.
    return (*this);
}

void Matrix::operator ++(int){
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
           float valuesSum= this->getValues(&i,&j)+1.0; 
           setValues(&i,&j,&valuesSum);
        }
    }

}

void Matrix::operator --(int){
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
           float valuesSab= this->getValues(&i,&j)-1.0; 
           setValues(&i,&j,&valuesSab);
        }
    }

}

void Matrix::operator +=(Matrix &a){
    int row = this->getRow(),
    col = this->getCol();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        float valuesSum= this->getValues(&i,&j)+a.getValues(&i,&j); 
        this->setValues(&i,&j,&valuesSum);
        }
    }
}

void Matrix::operator -=(Matrix &a){
    int row = this->getRow(),
    col = this->getCol();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        float valuesSum= this->getValues(&i,&j)-a.getValues(&i,&j); 
        this->setValues(&i,&j,&valuesSum);
        }
    }
}

void Matrix::operator *=(Matrix &a){
    int row = this->getRow(),
    col = this->getCol();
    int i, j, k;
    float bb[row][col];
	for(i = 0; i < row; ++i)
	{
		for(j = 0; j < col; ++j)
		{
			for(k=0; k<col; k++)
			{
                bb[i][j]+=this->getValues(&i,&k) * a.getValues(&k,&j);
			}
		}
	}

    for(i = 0; i < row; ++i)
	{
		for(j = 0; j < col; ++j)
		{
            float *b = &bb[i][j];
            this->setValues(&i,&j,b);
        }
    }
}
 bool Matrix::operator !(void){
    int row = getRow();
    int col = getCol();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout <<this -> getValues(&j,&i)<<"  ";
            }
            cout << endl;
        }
}

float* Matrix::getValues2(int *row, int *col){
    return values+(*row*this->col+*col);
}

float* Matrix:: operator [](int a){
    float *bb = new float(col);
    for(int i=0;i<col;i++){
        bb[i]=*getValues2(&a,&i);
    }
    return bb;
}



float* Matrix::getAllValuess(){
    return this->values;
}


void Matrix::display(){
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
            cout<<this->values[(i*this->col)+j]<<" ";
        }
        cout<<endl;
    }
        cout<<"--------"<<endl;
}
int Matrix::getRow(){
    return row;
} 

int Matrix::getCol(){
    return col;
}

float Matrix::getValues(int *row, int *col){
    return values[*row*this->col+*col];
}

void Matrix::setAll(int *row, int *col, float *values){
    setRow(row);
    setCol(col);
    setValues(row,col,values);
}

void Matrix::setRow(int *row){
    this->row = *row;
}

void Matrix::setCol(int *col){
    this->col = *col;
}


//Матрицийн хэмжээсийг өөрчлөх боломжгүй гэж үзлээ
void Matrix::setValues(int *row, int *col, float *values){
    if(values==NULL){
        this->values = new float[*row*(*col)];
    }else{
        int pos=((*row)*this->col)+*col;
        this->values[pos]=*values;
    }
}

