#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int length);
void printArray(int arr[], int size);

int main()
{

    int arr[6] = {1, 3, 2, 7, 4, 2};
    insertion(arr, 6);
    return 0;
}

void insertion(int arr[], int length)
{
    int i, k, j;
    for (i = 1; i < length; i++)
    {
        k = arr[i];
        j = i - 1;  
        while (j >= 0 && arr[j] > k )
        {
            arr[j + 1] = arr[j];

            j--;
        }
        arr[j+1] = k;
    }
    cout << "sorted arrays:";
    printArray(arr, length);
}

void printArray(int arr[], int size)
{
    int j;
    for (j = 0; j < size; j++)
    {
        cout << " " << arr[j];
    }
    cout << endl;
}
//insertionsort is sorting from first to last by incrementing 1 element each and moving one position to left