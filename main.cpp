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
    for (i = N-1; i >=0 ; i --) {
      cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}
