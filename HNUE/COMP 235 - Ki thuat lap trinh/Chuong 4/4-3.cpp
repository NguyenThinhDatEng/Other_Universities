#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int* inputSequence(int& n);

void best_subSeq_noDecrease(int *arr, int n);

int main()
{
    int n;
    int* arr = inputSequence(n);
    best_subSeq_noDecrease(arr, n);
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

void best_subSeq_noDecrease(int *arr, int n) {
    int maxLength = 1;
    int indexOfMax = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) >= *(arr + i - 1))
            count++;
        else
        {
            if (maxLength < count)
            {
                maxLength = count;
                indexOfMax = i;
            }
            count = 1;
        }
    }

    if (count == n)
        for (int i = 0; i < n; i++)
            cout << *(arr + i) << " ";
    else
        while (maxLength != 0)
        {
            cout << *(arr + indexOfMax - maxLength) << " ";
            maxLength--;
        }
}