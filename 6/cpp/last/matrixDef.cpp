#include "head.h"
/*
Параметртэй байгуулагч
Параметр: 
    row - Матрицийн мөрийн хэмжээ
    col - Матрицийн багананы хэмжээ
Үүрэг: Матрицийн хэмжээгээр сана ой нөөцөлж гарааны
утгаар хангах
*/
Matrix::Matrix(int row, int col){
    setAll(&row,&col,NULL);
}

/*
Устгагч байгуулагч
Матрицийн утга хадгалхад зориулж нөөцөлсөн ойгоо 
объект устах үед чөлөөлж ойн цойрхойгоос сэргийлж 
байна
*/
Matrix::~Matrix(){
    delete [] values;
    cout<<"object ustlaa"<<endl;
}

/*
+ операторыг дахин тодорхойлж хоёр матрицийг нэмдэг
байхаар тодорхойлж байна.
Функц дотор түр ашиглах гуравдагч төрлийн
матрицийг үүсгэж түүнд операторыг дуудсан матриц дээр
баруун талын матрицыг нэмэж түр матрицийн утгыг буцаана 
*/
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

/*
+ операторыг дахин тодорхойлж дуудсан матриц дээр
тогтмол утгыг матрицийн элемент бүх дээр нэмдэг
байхаар тодорхойлж байна.
Функц дотор түр ашиглах гуравдагч төрлийн
матрицийг үүсгэж түүнд операторыг дуудсан матрицийн
утга бүр дээр баруун талын тогтмолыг нэмэж түр 
матрицийн утгыг буцаана 
*/
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

/*
* операторыг дахин тодорхойлж хоёр матрицийг үрждэг
байхаар тодорхойлж байна.
Функц дотор түр ашиглах гуравдагч төрлийн
матрицийг үүсгэж түүнийг операторыг дуудсан матрицыг
баруун талын матрицаар үржиж түр матрицийн утгыг буцаана 
*/
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

/*
- операторыг дахин тодорхойлж хоёр матрицийг хасдаг
байхаар тодорхойлж байна.
Функц дотор түр ашиглах гуравдагч төрлийн
матрицийг үүсгэж түүнд операторыг дуудсан матрицаас
баруун талын матрицыг хасаж түр матрицийн утгыг буцаана 
*/

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
/*
= операторыг дахин тодорхойлж операторын баруун
талд байгаа матрицийн бүх утгыг операторыг дуудсан
оператор буюу зүүн талын операторт бүх утгыг олгоно. 
*/
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

/*
Тухайн операторыг дахин тодорхойлж дуудсан операторын 
бүх элементийг нэгээр нэмэгдүүлэх үйлдэлийг хийдэг
болгосон. Тухайн оператор нь зөвхөн дуудсан объект дээрээ
үйлдэл хийж түүндээ утга оноох тул утга буцаахгүй
*/
void Matrix::operator ++(int){
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
           float valuesSum= this->getValues(&i,&j)+1.0; 
           setValues(&i,&j,&valuesSum);
        }
    }

}

/*
Тухайн операторыг дахин тодорхойлж дуудсан операторын 
бүх элементийг нэгээр хорогдуулах үйлдэлийг хийдэг
болгосон. Тухайн оператор нь зөвхөн дуудсан объект дээрээ
үйлдэл хийж түүндээ утга оноох тул утга буцаахгүй
*/
void Matrix::operator --(int){
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
           float valuesSab= this->getValues(&i,&j)-1.0; 
           setValues(&i,&j,&valuesSab);
        }
    }

}

/*
Тухайн оператор нь энгийн нэмэх оператортой ижил
үүрэг гүйцэтгэх боловч утга буцаахгүй
учир нь дуудсан матриц дээр операторын баруун талын
матрицийг нэмэж өөрт нь буюу операторын зүүн талын
матриц дээр утгыг нь оноож байна.
*/
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

/*
Тухайн оператор нь энгийн хасах оператортой ижил
үүрэг гүйцэтгэх боловч утга буцаахгүй
учир нь дуудсан матрицаас операторын баруун талын
матрицийг хасаж өөрт нь буюу операторын зүүн талын
матриц дээр утгыг нь оноож байна.
*/
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

/*
Тухайн оператор нь энгийн үржих оператортой ижил
үүрэг гүйцэтгэх боловч утга буцаахгүй
учир нь дуудсан матрицийг операторын баруун талын
матрицаар үржижи өөрт нь буюу операторын зүүн талын
матриц дээр утгыг нь оноож байна.

*/
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

/*
Тухайн операторыг матрицийг хөрвүүлэх үйлдэл 
хийдэг байхаар дахин тодорхойлж байна.
*/
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

/*
Матрицийн тухайн мөрөн баганы хаягийг буцаана
*/
float* Matrix::getValues2(int *row, int *col){
    return values+(*row*this->col+*col);
}

/*
Тухайн мөрөнд байрлах бүх утгын хаяган хүснэгтийг
буцаана
*/
float* Matrix:: operator [](int a){
    float *bb = new float(col);
    for(int i=0;i<col;i++){
        bb[i]=*getValues2(&a,&i);
    }
    return bb;
}

/*
Матрицийн бүх утгыг хадалж буй хаягийг буцаана
*/
float* Matrix::getAllValuess(){
    return this->values;
}

/*
Матрицийн утгыг хэвлэх функц
*/
void Matrix::display(){
    for(int i=0;i<this->getRow();i++){
        for(int j=0;j<this->getCol();j++){
            cout<<this->values[(i*this->col)+j]<<" ";
        }
        cout<<endl;
    }
        cout<<"--------"<<endl;
}

/*
Мөрний хэмжээг авах функц
*/
int Matrix::getRow(){
    return row;
} 

/*
Багананы хэмжээг буцаах функц
*/
int Matrix::getCol(){
    return col;
}

/*
Тухайн мөрний тухайн баганы утгыг буцаах функц
*/
float Matrix::getValues(int *row, int *col){
    return values[*row*this->col+*col];
}

/*
Матрицийн бүх гишүүн өгөгдөлд утга оноох функц
*/
void Matrix::setAll(int *row, int *col, float *values){
    setRow(row);
    setCol(col);
    setValues(row,col,values);
}

/*
Матрицийн мөрний хэмжээг олгох функц
*/
void Matrix::setRow(int *row){
    this->row = *row;
}

/*
Мөрний баганыг олгох функц
*/
void Matrix::setCol(int *col){
    this->col = *col;
}

//Матрицийн хэмжээсийг өөрчлөх боломжгүй гэж үзлээ
/*
Тухайн мөр баганад утга оноох функц
Утга нь NULL  тэнцүү байвал байгуулагч функцээс дуудаж
байна гэж үзэж ойг дахин нөөцөлж байгаа
*/
void Matrix::setValues(int *row, int *col, float *values){
    if(values==NULL){
        this->values = new float[*row*(*col)];
    }else{
        int pos=((*row)*this->col)+*col;
        this->values[pos]=*values;
    }
}

