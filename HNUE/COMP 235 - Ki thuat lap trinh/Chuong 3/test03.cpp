#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    a = ' ' + a;
    int pos = 0;
    int count = 0;
    do
    {
        pos = a.find(b, pos);
        if (pos != -1)
        {
            count++;
            pos++;
        }
    } while (pos != -1);
    cout << count;
    return 0;
}