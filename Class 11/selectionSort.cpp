#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, min_index;
    cout<<"Enter Array Size: ";
    cin>>n;
    cout<<"Enter Array:"<<endl;
    int arr[n+5];
    for(int i = 0; i<n; i++)
        cin>>arr[i];

    for(int i = 0; i<n; i++)
    {
        min_index = i;

        for(int j = i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            min_index = j;
        }
        cout<<"Setp :"<<i+1<<endl;
        if(min_index != i)
        {
            swap(arr[i], arr[min_index]);

        }
        for(int k = 0; k<n; k++)
            cout<<arr[k]<<" ";
        cout<<endl;
    }
    cout<<"Sorted Array:"<<endl;
    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
