#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, arr[1000];
    cout<<"Enter Array Size: "<<endl;
    cin>>n;

    cout<<"Enter the array:"<<endl;
    for(int i = 0; i<n; i++) cin>>arr[i];

    int tem;

    for(int i = 1; i<n; i++)
    {
        tem = arr[i];
        int j = i -1;
        while( j >= 0 && arr[j] > tem)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tem;
    }
    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;


    return 0;
}
