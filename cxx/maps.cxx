#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin >> q;
    map<string, int> m;

    for(int i = 0; i < q; i++)  
    {
        int a;
        string s;
        cin >> a >> s;
        
        switch(a)
        {
            case 1:
                int j;
                cin >> j;

                m[s] += j;
                break;
            
            case 2:         
                m[s] = 0;
                break;

            default:
                cout << m[s] << "\n";
        }
    }
    return 0;
}



