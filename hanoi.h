//
// Created by MAC on 2021/9/17.
//

#ifndef MERGESORT_CPP_HANOI_H
#define MERGESORT_CPP_HANOI_H
#include <iostream>
using namespace std;
void hanoi(int init, int mid, int target,int num){
    if (num == 1){
        cout << init << "->" << target << endl;
    }
    else {
        hanoi(init,target,mid,num-1);
        cout << init << "->" << target << endl;
        hanoi(mid,init,target,num-1);
    }
}
#endif //MERGESORT_CPP_HANOI_H
