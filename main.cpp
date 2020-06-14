#include <iostream>
#include "matrix/matrix.h"
#include "matrix/matrix.cpp"
int main() {
    std::cout << "Hello, World!" << std::endl;
    matrix<double,4,4> matrix;
    matrix.print();


    return 0;
}
