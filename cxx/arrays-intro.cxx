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

    int arr[size];

    for(int i = size - 1; i >= 0; i--)
        cin >> arr[i];

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    

    return 0;
}
