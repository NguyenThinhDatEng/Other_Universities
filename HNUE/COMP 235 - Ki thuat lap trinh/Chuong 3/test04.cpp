#include<iostream>
using namespace std;

int UCLN(int a, int b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    while(a != 0 && b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    if (a)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    int c, d;
    cin >> a >> b >> c >> d;
    int ucln = UCLN(a * c, b * d);
    if (a * c == 0)
        ucln = 1;
    cout << a * c / ucln << " " << b * d / ucln << endl;
    ucln = UCLN(a * d,  b * c);
    if (a * d == 0)
        ucln = 1;
    cout << a * d / ucln << " " << b * c / ucln; 
    return 0;
}