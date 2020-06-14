//
// Created by gulu on 6/14/20.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <cstdio>
    template<typename T, size_t M, size_t N>
    class matrix {
    private:
        T data[M][N];
    public:
        //default size
        matrix();

        //deconstructor
        ~matrix();


        void test_len();

        void print();
    };





#endif //MATRIX_MATRIX_H
