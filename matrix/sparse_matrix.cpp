//
// Created by gulu on 6/14/20.
//

#include "sparse_matrix.h"

template<typename T>
sparse_matrix<T>::sparse_matrix(int col, int row) {
    this->col=col;
    this->row=row;
}

template<typename T>
matrix<T> sparse_matrix<T>::convert_2_matrix() {
    matrix<T> matrix(col,row);

    for (int i = 0; i < num; ++i) {
        int rowTemp=row_index[i];
        int colTemp=col_index[i];
        T val=value[i];
        matrix[rowTemp][colTemp]=val;
    }
    return matrix;
}

template<typename T>
int sparse_matrix<T>::get_num() {
    return num;
}

template<typename T>
bool sparse_matrix<T>::add_element(T t,int row,int col) {
    col_index.push_back(col);
    row_index.push_back(row);
    value.push_back(t);
    num++;
}

