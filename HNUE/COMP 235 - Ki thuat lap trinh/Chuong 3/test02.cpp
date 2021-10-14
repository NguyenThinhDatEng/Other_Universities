#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    cout << fixed << setprecision(1);
    double tmp;
    double rs;
    string s;
    while (m > 0)
    {
        rs = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            rs += tmp;
        }
        rs /= n;
        s = to_string(rs);
        if (s.at(s.find('.') + 1) == '0')
            cout << s.substr(0, s.find('.')) << ' ';
        else
            cout << rs << ' ';      
        m--;
    }
    return 0;
}