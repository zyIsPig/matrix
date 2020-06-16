//
// Created by gulu on 6/14/20.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <cstdio>
    template<typename T>
    class matrix {
    private:
        int row;
        int col;
        matrix<T> add_private(matrix<T>);
    public:

        T **p;
        //default size
        matrix(int col,int row);

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




    };





#endif //MATRIX_MATRIX_H
