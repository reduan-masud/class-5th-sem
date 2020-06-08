#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibo(n-1)+fibo(n-2);

}

int main()
{
    cout<<"Enter number : ";
    int n; cin>>n;
    cout<<n<<"th Fibonacci number is : ";
    cout<<fibo(n)<<endl;
    return 0;
}
