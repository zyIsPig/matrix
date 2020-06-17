//
// Created by gulu on 6/14/20.
//

#ifndef MATRIX_SPARSE_MATRIX_H
#define MATRIX_SPARSE_MATRIX_H

#include "matrix.h"
#include <cstdio>
#include "vector"

namespace sparse {

template<typename T>
    class sparse_matrix {
    private:
        std::vector<int> row_index;
        std::vector<int> col_index;
        std::vector<T> value;
        int num = 0;
        int row;
        int col;
    public:
        sparse_matrix(int, int);

        int get_num();

        bool add_element(T t, int col, int row);

        sparse_matrix<T> add(sparse_matrix<T>);

        sparse_matrix<T> muti(sparse_matrix<T>);






    };
}



#endif //MATRIX_SPARSE_MATRIX_H
