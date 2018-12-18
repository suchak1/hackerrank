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

    sort(vec.begin(), vec.end());

    for(int i : vec)
        cout << i << " ";

    return 0;
}
