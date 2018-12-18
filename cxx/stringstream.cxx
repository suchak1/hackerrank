#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    
    stringstream ss(str);
    vector<int> vec;
    
    for(int i = 0; ss; i++)
    {
        
        int a;
        char c;

        ss >> a >> c;
        vec.push_back(a);
    }

    return vec;
	// Complete this function
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

