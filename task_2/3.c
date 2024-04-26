#include <stdio.h>

int main()
{
	int N; // future matrix NxN
	scanf_s("%d", &N);
	/*
	matrix will be filled like this for [N = 3]
	0 0 1
	0 1 1
	1 1 1
	*/

	// write matrix
	int matrix[64][64];
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			if (i + j >= N - 1)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
		}
	}

	// outut of matrix
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}