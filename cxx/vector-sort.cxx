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
    vector<int> vec;

    for(int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    for(int i = 0; i < size; i++)
        cout << vec[i] << " ";

    return 0;
}
