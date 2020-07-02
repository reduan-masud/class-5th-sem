#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int lo, high, mid;
    lo = 0; 
    high = n-1;
    while(lo <= high)
    {
        mid = (lo+high)/2;
        if(arr[mid] == x)
            return mid;
        if(arr[mid] < x)
            lo = mid+1;
        else
            high = mid -1;
    }
    return -1;

}

int main()
{
    
    int arr[1000], n;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter values saperated by space."<<endl;
    for(int i = 0; i<n; i++) cin>>arr[i];
    
    cout<<"What do you want to searc?"<<endl;
    int x;  cin>>x;

    int pos = binarySearch(arr, n, x);
    if(pos >= 0)
        cout<<"Found at position "<<pos<<endl;
    else
        cout<<"Not Found"<<endl;
        

    return 0;
}
