#include <bits/stdc++.h>
using namespace std;

void mergesort(int arr[],int start,int end);
void printArray(int arr[], int start,int end);
void merge(int arr[],int start,int mid,int end);
int main()
{

    int arr[6] = {41, 31, 72, 27, 34, 21};
    mergesort(arr,0, 5);
    cout << "sorted arrays:";
    printArray(arr,0,5);
    return 0;
}

void mergesort(int arr[], int start,int end)
{
    if(start<end){
        int mid =(start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
    
}

void merge(int arr[],int start,int mid,int end){
    int arr2[end-start+1];
    int i=start,j=mid+1,k=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            arr2[k]=arr[i];
            k++;i++;
        }
        if(arr[i]>arr[j]){
            arr2[k]=arr[j];
            k++;j++;
        }
    }
    while(i<=mid){
        arr2[k]=arr[i];
        k++;i++;
    }
    while(j<=end){
        arr2[k]=arr[j];
        k++;j++;
    }
    for(i=start;i<=end;i++)
    {
        arr[i]=arr2[i-start];
    }

}

void printArray(int arr[], int start,int end)
{
    int j;
    for (j = start; j <= end; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}
