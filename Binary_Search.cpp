#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int i,int j,int key)
{
    if(i>j)
        return -1;

    int mid = (i+j)/2;
    if(arr[mid]==key)
        return mid;

    if(key>arr[mid])
    {
        return binarySearch(arr, mid+1, j, key);
    }
    else {
        return binarySearch(arr, i, mid-1, key);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int pos = binarySearch(arr,0,n-1,key);
    cout<<pos+1<<endl;
    return 0;
}