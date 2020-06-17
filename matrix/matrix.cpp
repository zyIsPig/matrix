//
// Created by gulu on 6/14/20.
//

#include "matrix.h"
#include <type_traits>
#include <malloc.h>
#include "string"
#include "iostream"
#include "exception.h"
#include "Complex.h"


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
//    for (int i = 0; i <row ; ++i) {
////        free(p[i]);
////    }
////    free(p);
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

template<typename T>
T matrix<T>::find_max() {
    T max_num = p[0][0];

    for (int i = 0; i<row; i++ ){
        for (int j = 0; j<col; j++){
            if (p[i][j] > max_num){
                max_num = p[i][j];
            }
        }
    }
    return max_num;
}

template<typename T>
void matrix<T>::copy(T ** t,int row,int col) {

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col ; ++j) {
            this->p[i][j]=t[i][j];
        }
    }

}

template<typename T>
T matrix<T>::find_min() {
    T min_num = p[0][0];

    for (int i = 0; i<row; i++ ){
        for (int j = 0; j<col; j++){
            if (p[i][j] < min_num){
                min_num = p[i][j];
            }
        }
    }
    return min_num;
}

template<typename T>
T matrix<T>::sum() {
    T summ = T();
    for (int i = 0; i<row; i++ ){
        for (int j = 0; j<col; j++){
            summ = summ+p[i][j];
        }
    }
    return summ;
}

template<typename T>
T matrix<T>::average() {
    T summ = T();
    T ave = T();

    for (int i = 0; i<row; i++ ){
        for (int j = 0; j<col; j++){
            summ =summ + p[i][j];
        }
    }
    ave = summ/(col * row);
    return ave;
}

template<typename T>
T matrix<T>::axis_find_max() {
    return nullptr;
}

template<typename T>
matrix<T> matrix<T>::scalar_muti(T t) {

    matrix<T> new_matrix(col,row);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            new_matrix[i][j]=p[i][j]*t;
        }
    }
    return new_matrix;

}

template<typename T>
matrix<T> matrix<T>::scalar_div(T t) {

    matrix<T> new_matrix(col,row);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            new_matrix[i][j]=p[i][j]/t;
        }
    }
    return new_matrix;
}


template<typename T>
matrix<T> matrix<T>::transpositon() {
    matrix<T> new_matrix(row,col);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            new_matrix[i][j]=p[j][i];
        }
    }
    return new_matrix;

}

template<typename T>
matrix<T> matrix<T>::conjugation() {
    matrix<Complex> matrix1();

}

template<typename T>
matrix<T> matrix<T>::muti(const matrix<T>) {






}

template<typename T>
sparse_matrix<T> matrix<T>::convert_2_matrix() {
    sparse_matrix<T> sparseMatrix(col,row);



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
