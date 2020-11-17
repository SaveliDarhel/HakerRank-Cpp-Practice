#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int que, row, k;
    
    cin >> row >> que;
    
    int *a[row];
    
    for (int i=0; i<row; i++){
        cin >> k;
        
        a[i]= new int[k];
        
        for (int j=0; j<k; j++){
            cin >> a[i][j];
        }
    }
    
    for (int i=0; i<que; i++){
        
        int val1,val2;
        
        cin >> val1 >> val2;
        
        cout << a[val1][val2] << endl;
    }
    
    return 0;
}
