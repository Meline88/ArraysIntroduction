#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i, N;
    cin>>N;
    int* arr = new int[N]; 
    for (i = 0; i < N; i ++) {
      cin>>arr[i];
    } 
    for (i = 0; i < N/2; i ++) {
      int temp;
      temp = arr[i];
      arr[i] = arr[N-1-i];
      arr[N-1-i] = temp;
    }
    for (i = 0; i < N; i ++) {
    cout << arr[i] <<" ";
    }
    delete []arr;
    return 0;
}
