#include <iostream>
#include "matrix/matrix.h"
#include "matrix/matrix.cpp"

bool testAdd(){
    matrix<int> matrix1(3,2);
    matrix<int> matrix2(2,2);
    matrix2.p[1][1]=2;

    matrix2=matrix2.add(matrix1);
    matrix2.print();
}


int main() {

    testAdd();


    return 0;
}



