
#ifndef SPE
#define SPE
#include "vector"
#include "matrix.h"
template<typename T>
class sparse_matrix {
private:
    std::vector<int> row_index;
    std::vector<int> col_index;
    std::vector<T> value;
    int num = 0;
    int row;
    int col;
public:
    sparse_matrix(int, int);

    int get_num();

    bool add_element(T t, int col, int row);

    sparse_matrix<T> add(sparse_matrix<T>);

    sparse_matrix<T> muti(sparse_matrix<T>);

    matrix::matrix<T> convert();


};


template<typename T>
sparse_matrix<T>::sparse_matrix(int row,int col){
    this->row=row;
    this->col=col;
}

template<typename T>
bool sparse_matrix<T>::add_element(T t,int row,int col) {
    col_index.push_back(col);
    row_index.push_back(row);
    value.push_back(t);
    num++;
}









#endif