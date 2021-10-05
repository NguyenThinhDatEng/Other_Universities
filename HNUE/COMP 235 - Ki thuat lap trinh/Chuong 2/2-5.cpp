#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int C(int n, int k)
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(n - 1, k) + C(n - 1, k - 1);
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << C(n, k);
    return 0;
}