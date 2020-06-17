#include <iostream>
#include "matrix/matrix.h"
#include "matrix/matrix.cpp"
#include "matrix/sparse_matrix.h"
#include "matrix/vector.hpp"
#include "Eigen/Dense"

#include "Eigen/Eigenvalues"
using namespace Eigen;



int test[3][3]={{1,2,3},{23,1,2},{3,10,2}};
int m11[3][3]={{1,0,1},{2,0,2},{21,1,0}};

struct test_str{
    int a=0;
    int b=0;

    test_str(){
        this->a=1;
        this->b=2;

    }
    test_str(int a,int b){
        this->a=a;
        this->b=b;
    }

    test_str operator +(const test_str ts) const{
        int aa=this->a+ts.a;
        int bb=this->b+ts.b;
        test_str testStr(aa,bb);
        return testStr;
    }
};


void copy(matrix::matrix<int> &m){

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m.p[i][j]=m11[i][j];
        }
    }


}

bool testAdd(){
    matrix::matrix<test_str> matrix1(3,2);
    matrix::matrix<test_str> matrix2(3,2);

    matrix2=matrix2.add(matrix1);
    matrix2.print();
}

bool test_find_max(){
    matrix::matrix<int> matrix1( 3, 3);
    copy(matrix1);
    matrix1.print();
    int max=matrix1.find_max();
    int min=matrix1.find_min();
    std::cout<<max<<std::endl;
    std::cout<<min<<std::endl;

}

bool test_sum(){
    matrix::matrix<int> matrix1(3,3);
    copy(matrix1);
    int cnt=matrix1.sum();
    std::cout<<cnt<<std::endl;
}


bool test_sparse(){

    matrix::matrix<int> matrix1(3,3);
    copy(matrix1);
    matrix1.print();
}

bool test_vector(){

    vector<int> v(3);
    vector<int> v4(3);
    v.p[1]=2;
    v4.p[2]=11;
    v=v.add(v4);
    v.print();

}

bool test_vector1(){

    matrix::matrix<int> ma(2,2);
    ma.p[0][0]=1;
    ma.p[0][1]=2;
    ma.p[1][0]=3;
    ma.p[1][1]=4;
    vector<int> v(2);
    v.p[0]=1;
    v.p[1]=2;
    v=ma.muti(v);
    v.print();

}

bool test_trans(){
    matrix::matrix<int> mat1(3,4);
    int m1[3][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,8,7,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            mat1.p[i][j]=m1[i][j];
        }
    }
    mat1.print();
    matrix::matrix<int> mat2(3,3);
    int m2[3][3]={{1,2,3},
                  {-1,0,1},
                  {2,1,2}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat2.p[i][j]=m2[i][j];
        }
    }
    mat2.print();
//    mat1.reshape(2,6);
//    mat1.print();
//    matrix::matrix<int> mat4=mat1.slice(0,1,0,1);
//    mat4.print();
    matrix::matrix<int> mat3=mat1.convoluton(mat2);
    mat3.print();
    return 0;
}

bool test_multi(){
    matrix::matrix<int> mat2(3,3);
    int m2[3][3]={{1,2,3},
                  {-1,0,1},
                  {2,1,2}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat2.p[i][j]=m2[i][j];
        }
    }
    mat2.print();
    std::cout<<mat2.determinant()<<std::endl;
}

bool testhan(){
    matrix::matrix<int> mat2(3,3);
    int m2[3][3]={{1,2,3},
                  {-1,0,1},
                  {2,1,2}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat2.p[i][j]=m2[i][j];
        }
    }
    mat2.print();
    std::cout<<mat2.det()<<std::endl;
}

void Eig()
{
    Matrix3d A;
    A << 1, 2, 3, 4, 5, 6, 7, 8, 9;
    std::cout << "Here is a 3x3 matrix, A:" << std::endl << A << std::endl << std::endl;
    EigenSolver<Matrix3d> es(A);

    Matrix3d D = es.pseudoEigenvalueMatrix();
    Matrix3d V = es.pseudoEigenvectors();
    std::cout << "The pseudo-eigenvalue matrix D is:" << std::endl << D << std::endl;
    std::cout << "The pseudo-eigenvector matrix V is:" << std::endl << V << std::endl;
    std::cout << "Finally, V * D * V^(-1) = " << std::endl << V * D * V.inverse() <<std:: endl;
}


int main() {

    test_multi();
//    test_multi();
//    test_trans();
//    Eig();
//    testhan();
//    matrix::matrix <int> mat1(3,4);
//
//    int m1[3][4]={{1,2,3,4},
//                  {5,6,7,8},
//                  {9,8,7,6}};
//
//    for(int i=0;i<3;i++){
//        for(int j=0;j<4;j++){
//            mat1.p[i][j]=m1[i][j];
//        }
//    }
//    mat1.print();
//    mat1=mat1.scalar_div(2);
////    mat1=mat1.transpositonspositon();
//    mat1.print();
//    matrix<int> mat2(3,3);
//    test_sparse();

//    test_vector1();

    return 0;
//    testAdd();
//test_find_max();
    test_sum();

    return 0;
}



