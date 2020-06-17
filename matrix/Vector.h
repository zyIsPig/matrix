#include <climits>
//
// Created by gulu on 2020/6/17.
//

#ifndef MATRIX_VECTOR_H
#define MATRIX_VECTOR_H
#include "matrix.h"

template <typename T>
class Vector: public matrix<T>{
private:
    int col=1;
    int row;
public:
    Vector(int row);
};


#endif //MATRIX_VECTOR_H
