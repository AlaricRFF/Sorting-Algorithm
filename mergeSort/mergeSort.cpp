#include <iostream>
#include <string>
#include "testCaseGen.h"
using namespace std;

void showArr(  int* Arr, int length){
    int *arr = Arr;
    cout << "your array: ";
    for (int i = 0; i < length; ++i) {
        cout << *(arr+i) << ' ';
    }
    cout << endl;
}

int* merge(int *Arr1, int *Arr2, int length_1, int length_2);

/// main
int main() {

    int * arr = randArray(10,20);
    int l_1, l_2;
    cin >> l_1 >> l_2;
    int *arr_1 = randArray(l_1,l_2),
        *arr_2 = randArray(l_2,l_1);
    showArr(arr_1,l_1);
    showArr(arr_2,l_2);
    delete [] arr; //
    return 0;
}
/// main



int *merge(int *Arr1, int *Arr2, int length_1, int length_2) {
    int * arr1 = Arr1,
            * arr2 = Arr2;
    int index_1 = 0,
            index_2 = 0,
            merge_index = 0;
    int merge[length_1 + length_2];
    for (; index_1 < length_1 && index_2 < length_2; merge_index++) {
        if ( arr1[index_1] <= arr2[index_2]){
            merge[merge_index] = arr1[index_1];
            index_1 ++;
        }
        else {
            merge[merge_index] = arr2[index_2];
            index_2 ++;
        }
    }
    merge_index ++;
    if (index_1 != length_1 - 1){
        for (; index_1 < length_1 ; index_1 ++){
            merge[merge_index] = arr1[index_1];
            merge_index ++;
        }
    }
    if (index_2 != length_2 - 1){
        for(; index_2 < length_2 ;index_2 ++){
            merge[merge_index] = arr2[index_2];
            merge_index ++;
        }
    }
    return merge;
}

