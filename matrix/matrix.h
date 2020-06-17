//
// Created by gulu on 6/14/20.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <cstdio>
#include "sparse_matrix.h"
    template<typename T>
    class matrix {
    private:
        int row{};
        int col{};
        matrix<T> add_private(matrix<T>);
    public:

        T **p;
        //default size
        matrix(int col,int row);

        void copy(T **,int row,int col);
        //deconstructor
        ~matrix();


        void test_len();

        void print();

        void * getP();

        T get(int,int);

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

        matrix<T> sub(const matrix<T>);

        matrix<T> scalar_muti(T);

        matrix<T> scalar_div(T t);

        matrix<T> transpositon();

        matrix<T> conjugation();

        matrix<T> element_wise_multiplication();












    };





#endif //MATRIX_MATRIX_H
