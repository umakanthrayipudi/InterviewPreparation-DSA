//not completed
#include <bits/stdc++.h>
using namespace std;

int QuickSort(int arr[], int strat,int end);
void swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int Partition(int a[],int low,int high)
{
    int pivot,index,i;
    index=low;
    pivot=high;

    for(i=low;i<high;i++){
        if(a[i]<a[pivot])
        {
            swap(&a[i],&a[index]);
            index++;
        }
    }
    swap(&a[pivot],&a[index]);

    return index;
}

int QuickSort(int a[],int low,int high)
{
    int pindex;
    if(low<high){
        pindex=Partition(a,low,high);
        QuickSort(a,low,pindex-1);
        QuickSort(a,pindex+1,high);
    }
    return 0;
}

int main()
{

    int n, i;
    // cout << "\nEnter the number of data elements to be sorted: ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        // cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    QuickSort(arr, 0, n - 1);

    // Printing the sorted data.
    // cout << "\nSorted Data ";
    for (i = 0; i < n; i++)
        cout << "->" << arr[i];

    return 0;
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
