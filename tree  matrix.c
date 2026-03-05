#include<stdio.h>
void readmatrix(int matrix[3][3])
{
	printf("Enter element of the matrix:\n");
	  for(int i=0; i<3;i++)
	{
		for(int j=0;j<3;j++)
	{
		scanf("%d",&matrix[i][j]);
	}
}
}
void displayMatrix(int matrix[3][3])
{
	printf("The Matrix is:\n");
	for(int i=0;i<3;i++);
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int matrix[3][3];
	readMatrix(matrix);
	displayMatrix(matrix);
	return 0;
}

