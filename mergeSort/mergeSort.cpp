#include <iostream>
#include <cmath>
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

void myMergeSort(int *arr, int begin, int end);
int* merge(int *Arr1, int *Arr2, int length_1, int length_2);
void myMergeNewV(int *arr, int begin, int border, int end);
/// main
int main() {
    cout << "the length of your array: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "enter your array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    myMergeSort(arr,0,n-1);
    showArr(arr,n);
    delete [] arr;
    return 0;
}
/// main

// this function is only valid when the two sub-array is arranged in an ascending sequence

void myMergeSort(int *arr, int begin, int end){
    if (begin >= end){
        return;
    }else{
        int mid = floor( (double )(end + begin) / 2);
        myMergeSort(arr,begin,mid);
        myMergeSort(arr,mid+1,end);
        myMergeNewV(arr,begin,mid,end);
    }
}

int *merge(int *Arr1, int *Arr2, int length_1, int length_2) {
    int * arr1 = Arr1,
            * arr2 = Arr2;
    int index_1 = 0,
            index_2 = 0,
            merge_index = 0;
    int* merge = new int[length_1 + length_2];
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
// this function is only valid when the two sub-array is arranged in an ascending sequence
void myMergeNewV(int *arr, int begin, int border, int end) { // they are index in the array (starting from 0
    int *first = new int[border - begin + 1];
    int *last = new int[end - border];
    for (int i = begin, j = 0; i <= border ; ++i,++j) {
        first[j] = arr[i];
    }
    for (int i = border + 1, j = 0; i <= end ; ++i, ++j) {
        last[j] = arr[i];
    }
    int index_1 = 0,
            index_2 = 0,
            mer_index = 0;
    while(index_1 < border - begin + 1 && index_2 < end - border) {
        if (first[index_1] <= last[index_2]){
            arr[mer_index] = first[index_1];
            mer_index ++;
            index_1 ++;
        }
        else {
            arr[mer_index] = last[index_2];
            mer_index ++;
            index_2 ++;
        }
    }
    if (index_1 != border - begin){
        for (; index_1 <= border -begin ; index_1 ++,mer_index ++){
            arr[mer_index] = first[index_1];
        }
    }
    else {
        for (; index_2 <= end - border - 1; index_2 ++, mer_index ++){
            arr[mer_index] = last[index_2];
        }
    }
}

