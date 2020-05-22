#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[5000], pos, value;
    cout<<"Enter array size"<<endl;
    cin>>n;
    cout<<"Enter Array"<<endl;
    for(int i = 0; i<n; i++) cin>>arr[i];

    cout<<"Enter Position"<<endl;
    cin>>pos;
    cout<<"Enter Value"<<endl;
    cin>>value;

    arr[pos-1] = value;

    cout<<"Updated Value"<<endl;
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}

