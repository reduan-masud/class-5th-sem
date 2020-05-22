#include <bits/stdc++.h>
using namespace std;

int main()
{
	int row1, col1, row2, col2;
	int mat1[20][20];
	int mat2[20][20];
	int subs[20][20];

	printf("Enter first matrix row & colume:\n");
    scanf("%d %d", &row1, &col1);

	printf("Enter first Matrix\n");
	for(int r = 0; r<row1; r++)
        for(int c = 0; c<col1; c++)
            scanf("%d", &mat1[r][c]);


	printf("Enter first matrix row & colume:\n");
    scanf("%d %d", &row2, &col2);

	printf("Enter first Matrix\n");
	for(int r = 0; r<row1; r++)
        for(int c = 0; c<col1; c++)
            scanf("%d", &mat2[r][c]);


    if(col1 != col2 || row1!=row2 )
    {
        printf("This subtraction not possible.\n");
        return 0;
    }
	//product
	for(int r = 0; r < row1; r++)
    {
        for(int c = 0; c<col1; c++)
        {
           subs[r][c] = mat1[r][c] - mat2[r][c];
        }
    }

    printf("Subtraction is:\n");
    for(int r = 0; r <row1; r++)
    {
        for(int c = 0; c< col1; c++)
         {
             printf("%d\t", subs[r][c]);
         }
         printf("\n");
    }

	return 0;
}

