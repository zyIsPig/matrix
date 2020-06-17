//
// Created by gulu on 6/14/20.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <cstdio>
#include "sparse_matrix.h"
#include "vector.hpp"

namespace matrix {
    template<typename T>
    class matrix {
    private:
        int row{};
        int col{};

        matrix<T> add_private(matrix<T>);
        matrix<T> sub_private(matrix<T>);
        matrix<T> multi_private(matrix<T>);

    public:

        T **p;

        //default size
        matrix(int row, int col);

        void copy(T **, int row, int col);

        //deconstructor
        ~matrix();


        void test_len();

        void print();

        void *getP();

        T get(int, int);

        matrix<T> add(matrix<T>);


        /**
         * the part is about the  basic arithmetic reduction operations
         */

        T find_max();

        T find_min();

        T sum();

        T average();

        T axis_find_max();

        /**
         * matrix calculate
         */

        matrix<T> muti(matrix<T>);


        matrix<T> scalar_muti(T);

        matrix<T> scalar_div(T t);

        matrix<T> transpositon();

        matrix<T> conjugation();

        matrix<T> element_wise_multiplication();

        vector<T> muti(vector<T>);

        matrix<T> subb(matrix<T> m);

        void reshape(int a,int b);

        matrix<T> slice(int rs,int re,int cs,int ce);

        matrix<T> convoluton(const matrix<T> kernel);

        T det();

        matrix<T> multiplication(matrix<T>);

//        sparse_matrix<T> convert_2_sparse_matrix();












    };


}


#endif //MATRIX_MATRIX_H
