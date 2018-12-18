#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    set<int> s;

    for(int i = 0; i < size; i++)
    {
        int a, b;
        cin >> a >> b;
        switch(a)
        {
            case 1:
                s.insert(b);
                break;
            case 2:
                s.erase(b);
                break;
            default:
                set<int>::iterator itr = s.find(b);
                if(itr == s.end())
                    cout << "No\n";
                else
                    cout << "Yes\n";
        }
    }
    return 0;
}



