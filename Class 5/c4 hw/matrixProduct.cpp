#include <bits/stdc++.h>
using namespace std;

int main()
{
	int row1, col1, row2, col2;
	int mat1[20][20];
	int mat2[20][20];
	int product[20][20];

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


    if(col1 != row2)
    {
        printf("This Product not possible.\n");
        return 0;
    }
	//product
	for(int r = 0; r < row1; r++)
    {
        for(int c = 0; c<col2; c++)
        {
            product[r][c] = 0;
            for(int i = 0; i<col1; i++)
            {
                product[r][c] += mat1[r][i]*mat2[i][c];
            }
        }
    }

    printf("Product Matrix is:\n");
    for(int r = 0; r <row1; r++)
    {
        for(int c = 0; c< col2; c++)
         {
             printf("%d\t", product[r][c]);
         }
         printf("\n");
    }

	return 0;
}
