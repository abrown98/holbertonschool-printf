#include <stdio.h>

int main(void)
{

	int x, y;

	int result;

	x = 10;
	y = 5;

	result = y % x;
	printf("%d\n", result);

	result = x % y;
	printf("%d\n", result);

	return 0;
}
