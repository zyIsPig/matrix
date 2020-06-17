//
// Created by gulu on 2020/6/16.
//

#ifndef MATRIX_EXCEPTION_H
#define MATRIX_EXCEPTION_H

struct degreeNotSuitable{
    int val;
    char * exp="the degree is not suitable";
    degreeNotSuitable(int val){val=val;}
};

#endif //MATRIX_EXCEPTION_H
