#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void horizontalLine(){
    cout << "----------------------------------" << endl;
}

void checkTickets(int m, int n)
{
    if (m > n)
        cout << "Excess tickets: " << m - n;
    else
        if (m == n)
            cout << "Enough tickets";
        else
            cout << "Missing tickets: " << n - m;
    cout << endl;
}

void numberOf_MenAndWomen(int n)
{
    int tmp = n % 5;
    n /= 5;
    if (tmp <= 3)
    {
        cout << "Number of men: " << n * 3 + tmp << endl;
        cout << "Number of women: " << n * 2;
    }
    else
    {
        cout << "Number of men: " << n * 3 + 3 << endl;
        cout << "Number of women: " << n * 2 + 5 - tmp;
    }

    cout << endl;
}

bool checkPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <=  n; i++)
        if (n % i == 0)
            return false;
    return true;
}

string sex(int ticketNumber, int& mensTicketNumber)
{
    int tmp = ticketNumber % 5;
    if (tmp == 0 || tmp == 4)
        return "female, receiving a set of clothes I'm Queen";
    else
    {
        mensTicketNumber++;
        return "male, receiving a set of clothes I'm King";
    }
}

int main()
{
    int m; // m < 100   number of tickets;
    cout << "Number of tickets prepared: ";
    cin >> m;

    int n;  // n < 100  number of customers;
    cout << "Number of customers joined: ";
    cin >> n;
    
    horizontalLine();

    checkTickets(m, n);

    horizontalLine();

    numberOf_MenAndWomen(n);

    horizontalLine();

    int count = 0;
    int mensTicketNumber = 0;
    for (int i = 2; i <= n; i++)
        if (checkPrime(i))
        {
            cout << "The " << ++count;
            switch(count)
            {
                case 0: cout << "st lucky person with ticket number 2 is a " << sex(i, mensTicketNumber) << endl;
                        break;
                case 1: cout << "nd lucky person with ticket number 3 is a " << sex(i, mensTicketNumber) << endl;
                        break;
                case 2: cout << "rd lucky person with ticket number 5 is a " << sex(i, mensTicketNumber) << endl;
                        break;
                default:
                    cout << "th lucky person with ticket number " << i << " is a " << sex(i, mensTicketNumber) << endl;
            }
        }

    horizontalLine();

    cout << "the number of clothes set I'm King gave is " << mensTicketNumber << endl;
    cout << "the number of clothes set I'm Queen gave is " << count - mensTicketNumber;
    return 0;
}