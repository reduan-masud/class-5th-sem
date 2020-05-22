#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arrSize, arr[5000], temp, startIndex, endIndex;
    cout<<"Enter Array Size :"<<endl;
    cin>>arrSize;

    cout<<"Insert Array Value :"<<endl;
    for(int i = 0; i<arrSize; i++) cin>>arr[i];

    //Reverse

    startIndex = 0;
    endIndex = arrSize - 1;
    while(startIndex < endIndex)
    {
       temp  = arr[startIndex];
       arr[startIndex] = arr[endIndex];
       arr[endIndex] = temp;
       startIndex++;
       endIndex--;
    }

    cout<<"Reversed Array"<<endl;
    for(int i = 0; i<arrSize; i++) cout<<arr[i]<<" ";


    return 0;
}
