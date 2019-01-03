#include <bits/stdc++.h>

using namespace std;

int sumDig(int n)
{
    int sum = 0;

    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Complete the solve function below.
int solve(int n) {

    int x = n;
    vector<int> v;
    int i = 2;

    while(i <= x)
    {
        if(x % i == 0)
        {
            v.push_back(i);
            x /= i;
        }
        else
            i++;
    }

    int sumFac = 0;

    for(auto z : v)
        sumFac += sumDig(z);

    return sumFac == sumDig(n);


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = solve(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
