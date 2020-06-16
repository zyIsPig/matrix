//
// Created by gulu on 6/14/20.
//

#include "matrix.h"
#include <type_traits>
#include <malloc.h>
#include "string"
#include "iostream"
#include "exception.h"


//template<typename T>
//matrix<T>::matrix() {
//    if(std::is_same<T,int>().value) {
//
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                data[i][j] = 0;
//            }
//        }
//    }
//
//    else if(std::is_same<T,double>().value){
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                data[i][j] = 0.0;
//            }
//        }
//    }
//}

template <typename T>
matrix<T>:: matrix(int col,int row) {
    this->col=col;
    this->row=row;
    T ** pointer=(T **)malloc(sizeof(T*)*row);
    for (int i = 0; i < row; ++i) {
        T * tempPoint=(T *)malloc(sizeof(T)*col);
       pointer[i]=tempPoint;
    }
    p=pointer;
}



//template<typename T>
//void matrix<T>::test_len() {
//    printf("%d and %d",sizeof(data),sizeof(data[0]));
//}

template<typename T>
matrix<T>::~matrix() {
    for (int i = 0; i <row ; ++i) {
        free(p[i]);
    }
    free(p);
}

template<typename T>
void matrix<T>::print() {

    for (int i = 0; i <row ; ++i) {
        for (int j = 0; j <col ; ++j) {
            printf("%d",p[i][j]);
        }
        printf("\n");
    }
}

template<typename T>
T matrix<T>::get(int col,int row) {

    //check valid
    return T(p)[row][col];

}

template<typename T>
void *matrix<T>::getP() {
    return p;
}

template<typename T>
matrix<T> matrix<T>::add(const matrix<T> matrix1) {

    try {
        if(this->row==matrix1.row && this->col==matrix1.col) {
            return add_private(matrix1);
        } else{
            throw (degreeNotSuitable(1));
        }
    }
    catch (degreeNotSuitable d) {
        std::cerr<<d.exp<<std::endl;
    }
}

template<typename T>
matrix<T> matrix<T>::add_private(matrix<T> matrix1) {


        matrix<T> m(col,row);

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col ; ++j) {
                m.p[i][j]=this->p[i][j]+matrix1.p[i][j];
            }
        }
        return m;



}


//template <typename T>
//matrix<T> matrix<T>::operator+(const matrix<T> m1) {
//
//    for (int i=0;i<m;i++){
//        for (int j = 0; j < n ; ++j) {
//            data[i][j]+=m1.data[i][j];
//        }
//    }
//    return this;
//
//
//}
