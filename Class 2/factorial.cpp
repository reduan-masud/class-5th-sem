#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 1) return 1;
    return n*factorial(n-1);

}

int main()
{
    cout<<"Enter number : ";
    int n; cin>>n;
    cout<<"Factorial of "<<n<<" is : ";
    cout<<factorial(n)<<endl;
    return 0;
}

