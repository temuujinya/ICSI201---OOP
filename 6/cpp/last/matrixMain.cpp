#include "head.h"

int main(){
    Matrix matrix(2,2);
    Matrix matrixb(2,2);
    // Matrix *temp;
    for(int i=0;i<matrix.getRow();i++){
        for(int j=0;j<matrix.getCol();j++){
            float hha;
            cin>>hha;
            matrix.setValues(&i,&j,&hha);
        }
        cout<<endl;
    }

    matrix.display();
    for(int i=0;i<matrixb.getRow();i++){
        for(int j=0;j<matrixb.getCol();j++){
            float hha;
            cin>>hha;
            matrixb.setValues(&i,&j,&hha);
        }
        cout<<endl;
    }
    matrixb.display();

    int r=0,c=1;
    float na=5.2;
    // temp = matrix * matrixb;
    // temp = matrix - matrixb;
    Matrix tempa(2,2);
    // temp = matrix;
    
    // matrix.setValues(&r,&c,&na);
    // matrix.display();
    // // cout<<matrix.getValues(&r,&c)<<endl;

    
    // temp = matrix + matrixb;
    //  tempa = matrix * matrixb;
    // tempa+=matrix;
    matrix*=matrixb;

    // matrix-=matrixb;
    // cout<<matrix[1][1];
    // cout<<tempa.getValues(&r,&c);    
    // temp->display();
    matrix.display();
    //  temp = matrix + na;
    // tempa.display();
     
    // temp->display();

    // delete [] temp->values;
    // delete temp;
}
