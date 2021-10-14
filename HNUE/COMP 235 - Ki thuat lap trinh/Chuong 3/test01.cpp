#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (isPrime(a[i]))
            count++;
    }
    cout << count;
    return 0;
}