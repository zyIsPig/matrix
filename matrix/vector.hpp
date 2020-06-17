#ifndef VEC
#define VEC
#include "matrix.h"

#include "iostream"

template <typename T>
class vector{
private:

public:
    int len;
    T *p;
    vector(int len);
    vector<T> add(vector<T>);
    void print();


};

template<typename T>
vector<T>::vector(int len){
    this->len=len;
    p= (T *)malloc(sizeof(T)*len);

    for (int i = 0; i < len; ++i) {
        p[i]=T();
    }
}

template<typename T>
void vector<T>::print() {
    for (int i = 0; i < this->len ; ++i) {
        std::cout<<p[i]<<std::endl;
    }
}

template<typename T>
vector<T> vector<T>::add(vector<T> v) {

    vector<T> new_vec(len);
    for (int i = 0; i < len; ++i) {
        new_vec.p[i]=this->p[i]+v.p[i];
    }
    return new_vec;
}

template<typename T>

#endif

