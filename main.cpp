#include <iostream>
#include "matrix/matrix.h"
#include "matrix/matrix.cpp"

int test[3][3]={{1,2,3},{23,1,2},{3,10,2}};

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


void copy(matrix<int> &m){

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            m.p[i][j]=test[i][j];
        }
    }


}

bool testAdd(){
    matrix<test_str> matrix1(3,2);
    matrix<test_str> matrix2(3,2);

    matrix2=matrix2.add(matrix1);
    matrix2.print();
}

bool test_find_max(){
    matrix<int> matrix1( 3, 3);
    copy(matrix1);
    matrix1.print();
    int max=matrix1.find_max();
    int min=matrix1.find_min();
    std::cout<<max<<std::endl;
    std::cout<<min<<std::endl;

}

bool test_sum(){
    matrix<int> matrix1(3,3);
    copy(matrix1);
    int cnt=matrix1.sum();
    std::cout<<cnt<<std::endl;
}




int main() {


    matrix<int> mat1(3,4);
    int m1[3][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,8,7,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            mat1.p[i][j]=m1[i][j];
        }
    }
    mat1.print();
    matrix<int> mat2(3,3);

    return 0;
//    testAdd();
//test_find_max();
    test_sum();

    return 0;
}



