#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int N, i;
    
    cin >> N;
    int arr[N];
    
    for (i=0; i < N; i++){
        cin >> arr[i];
    }
    
    for (i=N-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    
    return 0;
}
