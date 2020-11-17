#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    
    vector <int> result;
    stringstream ss(str);
    int a;
    char ch;
    
    ss >> a;
    result.push_back(a);
    
    for (int i=0; i<str.size(); i++){
        ss >> ch >> a;
        if (ss.fail())
            continue;
        else
            result.push_back(a);
    }
    
    return result;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
