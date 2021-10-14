#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

string upFirstLetterOfWord(string s)
{
    s = ' ' + s;
    string rs = "";
    int length = s.length();
    for (int i = 1; i < length; i++)
    {
        if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
            rs += toupper(s[i]);
        else
            rs += s[i];
    }
    return rs;
}

string lowFirstLetterOfWord(string s)
{
    s = ' ' + s;
    string rs = "";
    int length = s.length();
    for (int i = 1; i < length; i++)
    {
        if (s[i - 1] == ' ' && isalpha(s[i]))
            rs += tolower(s[i]);
        else
            rs += toupper(s[i]);
    }
    return rs;
}

int WordCount(string s)
{
    s = ' ' + s;
    int length = s.length();
    int count = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (isspace(s[i]) && !isspace(s[i + 1]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    getline(cin, s);
    char* c = &s[0];
    char choose;
    cout << "Enter choose: ";
    cin >> choose;
    switch (choose)
    {
    case 'a':
    {
        /* code */
        strlwr(c);
        cout << s << endl;
        strupr(c);
        cout << s;
        break;
    }
    case 'b':
    {
        string rs = "";
        rs += toupper(s[0]);
        rs += s.substr(1);
        cout << rs;
        break;
    }
    case 'c':
    {
        cout << upFirstLetterOfWord(s);
        break;
    }
    case 'd':
    {
       cout << lowFirstLetterOfWord(s);
       break;
    }
    case 'e':
    {
        cout << "Number of sentence: " << WordCount(s);
    }
    default:
        break;
    }

    return 0;
}