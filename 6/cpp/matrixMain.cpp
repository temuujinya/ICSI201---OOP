#include "matrix.h"

int main(){
    int col =2,row =2;

    Matrix matrix(2,2);
    Matrix matrixb(2,2);
    
    
    for(int i=0; i<matrix.getRow();i++){
         for(int j=0; j<matrix.getCol();j++){
            float hha;
            cin>>hha;
            matrix.setValues(i,j,hha);
         }
     }

    for(int i=0; i<matrixb.getRow();i++){
        for(int j=0; j<matrixb.getCol();j++){
            float hha;
            cin>>hha;            
            matrix.setValues(i,j,hha);

        }
    }
    Matrix c = matrix + matrixb;
    display(c);
}


