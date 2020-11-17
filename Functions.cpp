#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    
    int i, m = a;
    
    int arr[4] = {a,b,c,d};
    
    for (i=0; i < 4; i++){
        if (m < arr[i])
            m = arr[i];
    }
        
    return m;    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
