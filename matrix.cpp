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
#include "Eigen/Dense"
using namespace Eigen;
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

template<typename T>
void matrix::matrix<T>::reshape(int a, int b){
    int o=row*col;
    if(o!=a*b){
        printf("%s","Cannot reshape!");
        return;
    }else{
        T **newData=new T*[a];
        for(int i=0;i<a;i++){
            newData[i]=new T[b];
        }
        for(int i=0;i<o;i++){
            newData[i/b][i%b]=p[i/col][i%col];
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                p[i][j]=newData[i][j];
            }
        }
        row=a;
        col=b;
    }
}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::slice(int rs,int re,int cs,int ce){
    if(rs<0||rs>=row||re<0||re>=row||cs<0||cs>=col||ce<0||ce>=col||rs>re||cs>ce){
        std::cout<<"Invalid parameter.";
        return *this;
    }else{
        int newRow=re-rs+1;
        int newCol=ce-cs+1;
        matrix<T> newMatrix(newRow,newCol);
        for(int i=0;i<newRow;i++){
            for(int j=0;j<newCol;j++){
                newMatrix.p[i][j]=p[rs+i][cs+j];
            }
        }
        return newMatrix;
    }
}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::convoluton(const matrix<T> kernel){
    int kRow=kernel.row;
    int kCol=kernel.col;
    T **transKernel=new T*[kRow];
    for(int i=0;i<kRow;i++){
        transKernel[i]=new T[kCol];
    }
    int x=kRow-1;
    int y=kCol-1;
    for(int i=0;i<kRow;i++){
        for(int j=0;j<kCol;j++){
            transKernel[i][j]=kernel.p[x][y];
            y--;
        }
        x--;
        y=kCol-1;
    }
    int oRow=row+kRow-1;
    int oCol=col+kCol-1;
    matrix<T> res(oRow,oCol);
    for(int i=0;i<oRow;i++){
        for(int j=0;j<oCol;j++){
            T result=0;
            for(int k1=0;k1<kRow;k1++){
                for(int k2=0;k2<kCol;k2++){
                    int r=i-kRow+k1+1;
                    int c=j-kCol+k2+1;
                    if((r<0)||(c<0)||(r>=row)||(c>=col)) {
                        result += 0;
                    }else{
                        result += transKernel[k1][k2]*p[r][c];
                    }
                }
            }
            res.p[i][j]=result;
        }

    }
    return  res;
}

template<typename T>
T matrix::matrix<T>::det() //输入代表矩阵的二维数组、矩阵阶数，返回矩阵的行列式
{
    if(row!=col){
        std::cout<<"Not a square matrix."<<std::endl;
        return 0;
    }else{
        T d=0;
        int n=row;
        if(n==1)d=p[0][0];
        if(n==2)d=p[0][0]*p[1][1]-p[0][1]*p[1][0];
        else{
            for(int k=0;k<n;k++){
                T **M;
                M=(T**)malloc((n-1)*sizeof(T*));
                for(int i=0;i<n-1;i++)
                    M[i]=(T*)malloc((n-1)*sizeof(T));

                for(int i=0;i<n-1;i++)
                    for(int j=0;j<n-1;j++)
                        M[i][j]=p[i+1][j<k?j:j+1];

                if(p[0][k])
                    d+=p[0][k]*det(M,n-1)*(((2+k)%2)?-1:1);

                for(int i=0;i<n-1;i++)free(M[i]);
                free(M);
            }
        }
        return d;
    }



}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::multi_private(matrix<T> matrix1) {
    int new_row = this->row;
    int new_col = matrix1.col;

    matrix<T> m(new_row,new_col);

    for (int i = 0; i <new_row ; ++i) {
        for (int j = 0; j < new_col ; ++j) {

            T addd = T();
            for (int k = 0; k<this->col; k++){
                addd += this->p[i][k] * matrix1.p[k][j];

            }
            m.p[i][j] = addd;
        }
    }
    return m;

}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::multiplication(matrix<T> matrix1) {
    try {
        if(this->col==matrix1.row) {
            return multi_private(matrix1);
        } else{
            throw (degreeNotSuitable(1));
        }
    }
    catch (degreeNotSuitable d) {
        std::cerr<<d.exp<<std::endl;
    }
    return matrix1;
}

template<typename T>
T matrix::matrix<T>::determinant() {
    if(row!=col){
        std::cout<<"Not a square matrix."<<std::endl;
        return 0;
    }else {
        return det(p,row);
    }
}

template<typename T>
T matrix::matrix<T>::det(T **D, int n) {

        T d=0;
        if(n==1)d=D[0][0];
        if(n==2)d=D[0][0]*D[1][1]-D[0][1]*D[1][0];
        else{
            for(int k=0;k<n;k++){
                T **M;
                M=(T**)malloc((n-1)*sizeof(T*));
                for(int i=0;i<n-1;i++)
                    M[i]=(T*)malloc((n-1)*sizeof(T));

                for(int i=0;i<n-1;i++)
                    for(int j=0;j<n-1;j++)
                        M[i][j]=D[i+1][j<k?j:j+1];

                if(D[0][k])
                    d+=D[0][k]*det(M,n-1)*(((2+k)%2)?-1:1);

                for(int i=0;i<n-1;i++)free(M[i]);
                free(M);
            }
        }
        return d;

}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::eigenVectors() {
    if(row!=col){
        std::cout<<"Not a square matrix."<<std::endl;
        return *this;
    }else {
        int n=row;
        Eigen::MatrixXd mat(n,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat(i,j)=p[i][j];
            }
        }
        EigenSolver<MatrixXd> es(mat);
        MatrixXd V=es.pseudoEigenvectors();
        matrix<T> eigenVectorMat(n,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                eigenVectorMat.p[i][j]=V(i,j);
            }
        }
        return eigenVectorMat;
    }

}

template<typename T>
matrix::matrix<T> matrix::matrix<T>::eigenValues() {
    if(row!=col){
        std::cout<<"Not a square matrix."<<std::endl;
        return *this;
    }else{
        int n=row;
        MatrixXd mat(n,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat(i,j)=p[i][j];
            }
        }
        EigenSolver<MatrixXd> es(mat);
        MatrixXd D=es.pseudoEigenvalueMatrix();
        matrix<T> eigenValueMat(n,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                eigenValueMat.p[i][j]=D(i,j);
            }
        }
        return eigenValueMat;
    }}





















