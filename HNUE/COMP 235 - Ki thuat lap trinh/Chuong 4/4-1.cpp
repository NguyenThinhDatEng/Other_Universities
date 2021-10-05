#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i ++)
    {
        cin >> *(arr + i);
        if (*(arr + i) % 6 == 0)
            sum += arr[i];
    }
    cout << sum;
    return 0;
}