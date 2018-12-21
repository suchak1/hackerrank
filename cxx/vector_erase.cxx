#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int size;
    cin >> size;
    vector<int> vec(size);

    for(int i = 0; i < size; i++)
        cin >> vec[i];

    int pos;
    cin >> pos;

    vec.erase(vec.begin() + pos - 1);

    int begin, end;
    cin >> begin >> end;

    vec.erase(vec.begin() + begin - 1, vec.begin() + end - 1);

    cout << vec.size() << "\n";
    
    for(int i : vec)
        cout << i << " ";

    return 0;
}
