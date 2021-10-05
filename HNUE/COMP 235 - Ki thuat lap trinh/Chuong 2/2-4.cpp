#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

double multiAverage(int a, int b)
{
    return sqrt(a * b);
}

double multiAverage(double a, double b)
{
    return sqrt(a * b);
}

int main()
{
    cout << multiAverage(2, 1) << endl;
    cout << multiAverage(7.8, 9.2);
    return 0;
}