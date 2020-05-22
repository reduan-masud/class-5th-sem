#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int arr[5000];
    cout<<"Enter Element Number: "<<endl;
    cin>>n;
    cout<<"Enter Elements: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int index, element;
    cout<<"Enter Index want to insert : ";
    cin>>index;
    cout<<"Enter Element : ";
    cin>>element;
    n++;
    int temp = arr[index];
    int temp2;
    arr[index] = element;
    for(int i = index+1; i<n; i++)
    {
        temp2 = arr[i];
        arr[i] = temp;
        temp = temp2;

    }
    cout<<"Array after inserted"<<endl;
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
