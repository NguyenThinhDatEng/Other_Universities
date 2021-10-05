#include<iostream>
#include<algorithm>
#include<ctype.h>
#include<fstream>
#include<iomanip>
using namespace std;

struct Student
{
    /* data */
    string fullName = "";
    double mark = 0;
    
    void inputInfomation()
    {
        getline(cin, fullName);
        cout << "Enter fullname of Student: ";
        getline(cin, fullName);
        cout << "Enter mark of Student: ";
        cin >> mark;
    }

    string getName() {
        string name = "";
        // Remove extra spaces at the end of the string
        while (fullName.back() == ' ')
            fullName.pop_back();
            
        char c = fullName.back();
        int index = fullName.length() - 1;
        while (!isspace(c))
        { 
            name.push_back(c);
            c = fullName.at(--index);
        }
        reverse(name.begin(), name.end());
        return name;
    }
};

void saveToFile(string name, double mark, Student* students, int n)
{
    ofstream fileOutput("D:\\sinhvien.txt");

    if (fileOutput.fail())
	{
		cout << "Failed to open this file!" << std::endl;
		return;
	}

    for (int i = 0; i < n; i++)
        if (students[i].getName().compare(name) == 0)
            if (students[i].mark >= 8)
                fileOutput << setw(30) << students[i].fullName << setw(30) << students[i].mark << endl;
    fileOutput.close();
}


int main()
{
    int n;
    cin >> n;
    Student* students = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "." << endl;
        students[i].inputInfomation();
    }
    saveToFile("Hoang", 8, students, n);
    return 0;
}