//This program will take an integar 'n'
//and take 'n' input in to an array.
 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int arr[100]; // here "arr" is array name and "100" is array size
	int n, i;
	scanf("%d", &n);
	for(i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	return 0;
}
