#include <bits/stdc++.h>
using namespace std;

#define long long ll;


int main()
{
    //freopen("input.txt", "r", stdin);
    int arr[1000];
    int arrSize;
    cout<<"Enter array size ";
    cin>>arrSize;

    int minValue = INT_MAX;
    int minPos;

    int maxValue = INT_MIN;
    int maxPos;


    for(int i = 0; i<arrSize; i++)
    {
        cin>>arr[i];
        if(arr[i] > maxValue)
        {
            maxValue = arr[i];
            maxPos = i;
        }

        if(arr[i] < minValue)
        {
            minValue = arr[i];
            minPos = i;
        }
    }


    /*
    for(int i = 0; i<arrSize; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    */




    printf("Max Value is %d and position is %d\n", maxValue, maxPos+1);
    printf("Min Value is %d and position is %d\n", minValue, minPos+1);

    return 0;
}
