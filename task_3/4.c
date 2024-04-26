#include <stdio.h>

int main(void)
{
	char* found = NULL;
	int found_num = 0, M = 0, N = 0;

	// input string of hay and needle
	printf("Write string itself (max 64 symbols) [dot - end] and then write string to find (max 4 symbols) like this [qwerty.er.]\n");
	char string_hay[64];

	while (scanf_s("%c", &string_hay[M]))
	{
		if (string_hay[M] == '.')
		{
			break;
		}
		M++;
	}

	char string_needle[4];
	while (scanf_s("%c", &string_needle[N]))
	{
		if (string_needle[N] == '.')
		{
			break;
		}
		N++;
	}

	// search prosses
	for (int i = 0; i < 10 - 2 + 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (string_hay[i + j] != string_needle[j])
				break;
			if (j == 1)
			{
				found = string_hay + i;
				found_num = i;
				break;
			}
		}
	}

	// output addres and char with possition
	printf("found addr = %p\n", found);
	printf("found itself %c on actuall pos %d +1\n", *found, found_num);
}