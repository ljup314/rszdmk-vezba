#include <stdio.h>

int Calculate(int a, int b)
{
	if(a > b)
		return a - b;
	else
		return b - a;
}

int main()
{
	int a = 3;
	int b = 8;
	int c;

	Calculate(a, b);

	printf("Result %d\n", c);
	return 0;
}