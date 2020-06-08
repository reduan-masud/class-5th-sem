#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r, c;
	int mat[20][20];


	printf("Enter matrix row & colume:\n");
    scanf("%d %d", &r, &c);

	printf("Enter Matrix\n");
	for(int i = 0; i<r; i++)
        for(int j = 0; j<c; j++)
            scanf("%d", &mat[i][j]);


    int sum = 0;
    int sum2 = 0;
     for(int i = 0; i<r; i++)
    {
        sum += mat[i][i];
        sum2 += mat[i][r-i-1];
    }

    printf("Sum of Primary Diagonal : %d\n", sum);
    printf("Sum of Secondary Diagonal : %d\n", sum2);




	return 0;
}
