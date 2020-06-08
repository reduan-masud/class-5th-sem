#include <bits/stdc++.h>
using namespace std;

int const MOD = 1e9+5;

#define  pi acos(-1.00)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define newLine printf("\n")
#define start_p int main()
#define end_p return 0
#define test_IO freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define test_IO_IN freopen("input.txt", "r", stdin)
#define test_IO_OUT freopen("output.txt", "w", stdout)
#define pb push_back
#define deb(x) cout<<#x<<"\t"<<x<<"\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;


start_p{
    #ifndef ONLINE_JUDGE
    //test_IO_IN;
    //test_IO_OUT;
    #endif // ONLINE_JUDGE
    int arr[100000];
    cout<<"Insert Number of Element"<<endl;
    int n;
    cin>>n;
    cout<<"Insert array"<<endl;
    for(int i = 0; i< n; i++)
        cin>>arr[i];

    cout<<"Inter Index Number you want to delete"<<endl;
    int d; cin>>d;

    int arrLen = n-1;

    for(int i = d; i<arrLen; i++)
        arr[i] = arr[i+1];

    cout<<"Array after delete selectec index of the array"<<endl;
    for(int i = 0; i < arrLen; i++)
        cout<<arr[i]<<" ";

    end_p;
}

