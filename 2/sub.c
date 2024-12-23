#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int sub_recursive(int n)
{

	if(n < 0) return 0;
	return n + sub_recursive(n-3);
}

int sub_for(int n)
{
	int result;
	for(int i = n; i >= 0 ; i-=3)
	{
	    result += i;
	}
	return result;
}


int main(void)
{
	clock_t start, stop;
	int n = 10;

	start = time(NULL);
	int r1 = sub_recursive(n);
	stop = time(NULL);
	double d1 = (double)difftime(start,stop);
	printf("재귀 : %d (%f sec)\n", r1, d1);

	start = time(NULL);
	int r2 = sub_for(n);
	stop = time(NULL);
	double d2 = (double)difftime(start,stop);
	printf("반복 : %d (%f sec)\n", r2, d2);

	return 0;
}
