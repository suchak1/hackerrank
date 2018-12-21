#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q;
    cin  >> n >> q;

    vector<vector<int>> vec(n);

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec[i] = vector<int>(x);

        for(int j = 0; j < x; j++)
        {
            cin >> vec[i][j]; 
        }
    }

    for(int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << vec[x][y] << '\n';
    }
    
    return 0;
}

