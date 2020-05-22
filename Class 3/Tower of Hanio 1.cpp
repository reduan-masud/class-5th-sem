#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void hanio(int disk, char source, char aux, char dest)
{
    if(disk == 1)
    {
        cout<<"STEP "<<cnt+1<<": MOVE "<<disk<<" FROM "<<source<<" TO "<<dest<<endl;
        cnt++;
    }
    else
    {
        hanio(disk-1, source, dest, aux);
        cout<<"STEP "<<cnt+1<<": MOVE "<<disk<<" FROM "<<source<<" TO "<<dest<<endl;
        cnt++;
        hanio(disk-1, aux, source, dest);
    }
}
int main()
{

    int n; cin>>n;

    hanio(n, 'S', 'A', 'D');
    cout<<"TOTAL STEP : "<<cnt<<endl;
    return 0;
}
