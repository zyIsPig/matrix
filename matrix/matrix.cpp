//
// Created by gulu on 6/14/20.
//

#include "matrix.h"
#include <type_traits>



template<typename T,size_t m,size_t n>
matrix<T,m,n>::matrix() {
    if(std::is_same<T,int>().value) {

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                data[i][j] = 0;
            }
        }
    }

    else if(std::is_same<T,double>().value){
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                data[i][j] = 0.0;
            }
        }
    }
}

template<typename T,size_t m,size_t n>
void matrix<T,m,n>::test_len() {
    printf("%d and %d",sizeof(data),sizeof(data[0]));
}

template<typename T, size_t M, size_t N>
matrix<T, M, N>::~matrix() {

}

template<typename T,size_t m,size_t n>
void matrix<T,m,n>::print() {
    for (int i = 0; i <m ; ++i) {
        for (int j = 0; j <n ; ++j) {
            printf("%d",data[i][j]);
        }
        printf("\n");
    }

}
