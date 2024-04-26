#include <stdio.h>

int main(void)
{

	int user_num;
	printf("Write number in hex");
	scanf("%x", user_num);
	printf("Input number: %x\n", x);
	int* px = &x;
	*((char*)px + 1) = 0xAA;
	printf("Changed number: %x\n", x);

}