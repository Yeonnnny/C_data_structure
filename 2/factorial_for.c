#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int result = 1, n = 3;

	for(int i = 1; i <= n; i++)
	{
	    result *= i;
	    printf("factorial(%d) = %d\n", i, result);
	}
	return 0;

}
