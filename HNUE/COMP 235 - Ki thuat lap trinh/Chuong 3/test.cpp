    #include<iostream>
    #include<iomanip>
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
            if (s[i - 1] == ' ' && isalpha(s[i]))
                rs += toupper(s[i]);
            else
                rs += tolower(s[i]);
        }
        return rs;
    }

    int main()
    {
        string s;
        getline(cin, s);
        cout << upFirstLetterOfWord(s);
        return 0;
    }