#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	int i, result = 1;

	for(i = 1; i <= n; i++)
	{
	    result *= i;
	    printf("factorial(%d) = %d\n", i, result);
	}
	return result;
}

int main(void)
{
	factorial(3);
	return 0;
}
