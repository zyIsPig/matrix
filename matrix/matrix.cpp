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



template <typename T>
matrix::matrix<T>:: matrix(int row,int col) {
    this->col=col;
    this->row=row;
    T ** pointer=(T **)malloc(sizeof(T*)*row);
    for (int i = 0; i < row; ++i) {
        T * tempPoint=(T *)malloc(sizeof(T)*col);
       pointer[i]=tempPoint;
    }
    p=pointer;
}

template<typename T>
matrix::matrix<T>::~matrix() {
//    for (int i = 0; i <row ; ++i) {
////        free(p[i]);
////    }
////    free(p);
}

template<typename T>
void matrix::matrix<T>::print() {

    for (int i = 0; i <row ; ++i) {
        for (int j = 0; j <col ; ++j) {
            printf("%d",p[i][j]);
        }
        printf("\n");
    }
}

template<typename T>
T matrix::matrix<T>::get(int col,int row) {

    //check valid
    return T(p)[row][col];

}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::add(const matrix<T> matrix1) {

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
matrix::matrix<T> matrix::matrix<T>::add_private(matrix<T> matrix1) {

        matrix<T> m(col,row);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col ; ++j) {
                m.p[i][j]=this->p[i][j]+matrix1.p[i][j];
            }
        }
        return m;
}

template<typename T>
T matrix::matrix<T>::find_max() {
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
void matrix::matrix<T>::copy(T ** t,int row,int col) {

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col ; ++j) {
            this->p[i][j]=t[i][j];
        }
    }

}

template<typename T>
T matrix::matrix<T>::find_min() {
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
T matrix::matrix<T>::sum() {
    T summ = T();
    for (int i = 0; i<row; i++ ){
        for (int j = 0; j<col; j++){
            summ = summ+p[i][j];
        }
    }
    return summ;
}

template<typename T>
T matrix::matrix<T>::average() {
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
T matrix::matrix<T>::axis_find_max() {
    return nullptr;
}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::scalar_muti(T t) {

    matrix<T> new_matrix(row,col);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            new_matrix.p[i][j]=p[i][j]*t;
        }
    }
    return new_matrix;

}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::scalar_div(T t) {

    matrix<T> new_matrix(row,col);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            new_matrix.p[i][j]=p[i][j]/t;
        }
    }
    return new_matrix;
}


template<typename T>
matrix::matrix<T>matrix::matrix<T>::transpositon() {
    matrix<T> new_matrix(col,row);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            new_matrix.p[j][i]=p[i][j];
        }
    }
    return new_matrix;

}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::conjugation() {
    matrix<Complex> matrix1();
}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::muti(const matrix<T>) {







}

template<typename T>
vector<T> matrix::matrix<T>::muti(vector<T> v) {

    vector<T> new_vec(row);

    try {


        if (col == v.len) {
            for (int i = 0; i < row; ++i) {
                T ans = T();
                for (int j = 0; j < col; ++j) {
                    ans = ans + this->p[i][j] * v.p[j];
                }
                new_vec.p[i] = ans;
            }
        } else {
            throw (degreeNotSuitable(1));
        }
    }
    catch (degreeNotSuitable d) {
        std::cerr<<d.exp<<std::endl;
    }
    return new_vec;

}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::subb(matrix<T> matrix1) {

    try {
        if(this->row==matrix1.row && this->col==matrix1.col) {
            return sub_private(matrix1);
        } else{
            throw (degreeNotSuitable(1));
        }
    }
    catch (degreeNotSuitable d) {
        std::cerr<<d.exp<<std::endl;
    }

}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::sub_private(matrix<T> matrix1) {
    matrix<T> m(col,row);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col ; ++j) {
            m.p[i][j]=this->p[i][j]-matrix1.p[i][j];
        }
    }
    return m;
}















