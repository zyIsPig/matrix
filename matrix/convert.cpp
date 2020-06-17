////
//// Created by gulu on 2020/6/17.
////
//
//#include "matrix.h"
//#include "sparse_matrix.h"
//
//template <typename T>
//static sparse::sparse_matrix<T> matrix_2_sparse(matrix::matrix<T> m){
//
//    sparse::sparse_matrix<T> s(3,3);
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            if(m[i][j] != 0) {
//                s.add_element(m.p[i][j],j,i);
//            }
//        }
//    }
//
//    return s;
//
//}