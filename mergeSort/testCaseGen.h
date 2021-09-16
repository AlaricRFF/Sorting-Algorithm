//
// Created by MAC on 2021/9/15.
//

#ifndef MERGESORT_TESTCASEGEN_H
#define MERGESORT_TESTCASEGEN_H
/// the test case is meant for generating an increasing array with specified entries given by the user
#include <random>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <random>


int* randArray(const size_t& eNum, int init){
    //srand(time(0));
    int * arr = new int[eNum];
    for (int i = 0; i < eNum ; i++){
         if(i == 0){
            *(arr + i) = init;
         }
         else{
             double scale =(double ) rand()/(double )RAND_MAX + 1;
             arr[i] = (int)(scale*arr[i-1]);
             if (arr[i] == arr [i-1]){
                 arr[i] ++;
             }
         }
    }
    return arr;
}

void fillRandArr(int * arr, size_t length, int init){
    for (int i = 0; i < length ; i++){
        if(i == 0){
            *(arr + i) = init;
        }
        else{
            double scale =(double ) rand()/(double )RAND_MAX + 1;
            arr[i] = (int)(scale*arr[i-1]);
            if (arr[i] == arr[i-1]){
                arr[i] ++;
            }
        }
    }
}

#endif //MERGESORT_TESTCASEGEN_H
