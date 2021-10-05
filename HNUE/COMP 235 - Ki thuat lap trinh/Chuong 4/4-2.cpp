#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int* inputSequence(int& n);

void displaySequence(int* arr, int n);

bool checkPrime(int n);

int quantityOfPrimes(int* arr, int n);

int main()
{
    int n;
    int* arr = inputSequence(n);
    displaySequence(arr, n);
    cout << quantityOfPrimes(arr, n);
    return 0;
}

int* inputSequence(int& n)
{
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return arr;
}

void displaySequence(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(arr + i)  << " ";
    cout << endl;
}

bool checkPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int quantityOfPrimes(int* arr, int n)
{
    cout << "Number of Primes in Sequence: ";
    int count = 0;
    for (int i = 0; i < n; i++)
        if (checkPrime(*(arr + i)))
            count++;
    return count;
}
