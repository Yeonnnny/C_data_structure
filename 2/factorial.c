#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	printf("factorial(%d)\n", n);
	if(n <= 1) return (1);
	else return (n*factorial(n-1));
}

int main(void)
{
	factorial(3);
	return 0;
}
