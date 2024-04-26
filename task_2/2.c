#include <stdio.h>

int main()
{
	// input of oue array
	int N; // length of array
	int array[64]; // 64 for sure
	printf("write length of array (max 64)\n");
	scanf_s("%d", &N);
	printf("write symbols one by one\n");
	for (size_t i = 0; i < N; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// output of our array
	for (size_t i = 0; i < N; i++)
	{
		printf("%d ", array[N - 1 - i]);
	}
}
