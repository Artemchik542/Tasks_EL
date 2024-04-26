#include <stdio.h>

int main()
{
	int N; // future matrix NxN
	scanf_s("%d", &N);
	for (size_t i = 0; i < N; i++)
	{
		int sum;
		for (size_t j = 0; j < N; j++)
		{
			sum = i * N + j + 1;
			printf("%3d", sum); // %3d нужно для красивого вывода матрицы в консоль
		}
		printf("\n");
	}
}
