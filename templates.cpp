#include <iostream>
 using namespace std;

 const int Max = 5;

/*
 int Add(int x, int y){
    return x+y;
 }
*/
template<typename T>
T Add(T x, T y){
    return x+y;
}

/*
int ArraySum(int *pArr, int arrSize){
    int sum;
    sum = 0;
    for(int i = 0; i < arrSize; i++){
        sum = sum + *(pArr+i);
    }
    return sum;
}
*/
template<typename A>
A ArraySum(A *pArr, int arrSize){
    A sum;
    sum = 0;
    for(int i = 0; i < arrSize; i++){
        sum = sum + *(pArr+i);
    }
    return sum;
}

/*
int MaxArray(int *pArr, int arrSize){
    int maxEl;
    maxEl = 0;
    for(int i = 0; i < arrSize; i++){
        if(*(pArr+i) > maxEl){
            maxEl = *(pArr+i);
        }
    }
    return maxEl;
}*/
template<typename M>
M MaxArray(M *pArr, int arrSize){
    M maxEl;
    maxEl = 0;
    for(int i = 0; i < arrSize; i++){
        if(*(pArr+i) > maxEl){
            maxEl = *(pArr+i);
        }
    }
    return maxEl;
}

 int main(){
     int x, y;
     double a, b;

     x = 5;
     y = 6;
     cout << Add(x, y) << endl;

     a = 6.45;
     b = 7.89;
     cout << Add(a, b) << endl;

     int arr[Max] = { 1, 2, 3, 4, 5 };
     int *pointer;

     pointer = arr;

     double arrdbl[Max] = { 1.1, 2.3, 3.4, 4.7, 5.9 };
     double *pointerdbl;

     pointerdbl = arrdbl;

     cout << ArraySum(pointer, Max) << endl;
     cout << ArraySum(pointerdbl, Max) << endl;

     cout << MaxArray(pointer, Max) << endl;
     cout << MaxArray(pointerdbl, Max) << endl;

 return 0;
 }
