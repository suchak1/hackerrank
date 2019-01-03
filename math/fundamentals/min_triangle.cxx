#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int base, area;
    cin >> base >> area;

    double height = 2.0 * area / base;

    printf("%d", (int)ceil(height));

    return 0;
}
