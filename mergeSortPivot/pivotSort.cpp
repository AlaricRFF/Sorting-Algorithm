#include <iostream>
#include <vector>
using std::vector;
using namespace std;

template <typename T>
T Min(T a, T b){
    return a <= b ? a:b;
}

template <typename T>
T Max(T a, T b){
    return a >= b ? a:b;
}

void showVec(const vector<double>& vec){
    cout << "your vector: ";
    for (auto e:vec) {
        cout << e << ' ';
    }
    cout << endl;
}

void pivotSortSmall2Big(const vector<double>& vec);
///////////////
int main() {
    vector<double> vec;
    double temp;
    while(true){
        if (cin>>temp){
            vec.push_back(temp);
        }
        else{
            cin.clear();
            break;
        }
    }
    showVec(vec);
    pivotSortSmall2Big(vec);
    return 0;
}
////////////
void pivotSortSmall2Big(const vector<double>& vec){ // position as in the vector, ranging from zero
    if (vec.empty()){
        return;
    }
    else if (vec.size() == 1){
        cout << vec[0] << ' ';
        return;
    }
    else if (vec.size() == 2){
        cout << Min(vec[0],vec[1]) << ' ' << Max(vec[0],vec[1]) << ' ';
        return;
    }
    else { // set the last element in the vector as pivot
        vector<double> smallerVec = vector<double>(), biggerVec = vector<double>();
        double pivot = vec[vec.size()-1];
        int pivotFreq = 0;
        for (auto e:vec){
            if (e < pivot)
                smallerVec.push_back(e);
            if (e > pivot)
                biggerVec.push_back(e);
            if (e == pivot)
                pivotFreq ++;
        }
        vector<double> pivotRecurrence (pivotFreq,pivot);
        pivotSortSmall2Big(smallerVec);
        for (auto e:pivotRecurrence){
            cout << e << ' ';
        }
        pivotSortSmall2Big(biggerVec);
    }
}