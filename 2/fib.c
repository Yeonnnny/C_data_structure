#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 피보나치 수열
int fib(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	return(fib(n-2)+fib(n-1));

}

int for_fib(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;

	int pp = 0;
	int p = 1;
	int result = 0;

	for(int i = 2; i<=n; i++){
	    result = p+pp;
	    pp = p;
	    p = result;
	}
	return result;
}

int new_fib(int n)
{
	printf("fib(%d)is called \n", n);
	if(n==0) return 0;
	if(n==1) return 1;
	return (new_fib(n-1)+new_fib(n-2));
}

int main(void)
{
	clock_t stop, start;
	int n = 6;
	start = clock();
	printf("순환 fib(%d) = %d ", n, fib(6));
	stop = clock();
	double t1 = (double)(stop-start)/CLOCKS_PER_SEC;
	printf("(%f sec)\n", t1);

	start=clock();
	printf("반복 fib(%d) = %d ", n, for_fib(n));
	stop = clock();
	double t2 = (double)(stop-start)/CLOCKS_PER_SEC;
	printf("(%f sec)\n", t2);

//	new_fib(6);
}
