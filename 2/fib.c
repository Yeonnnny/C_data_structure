#include <stdio.h>
#include <stdlib.h>

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


int main(void)
{

	int n = 6;
	int result = fib(6);
	printf("순환 fib(%d) = %d\n", n, result);
	printf("반복 fib(%d) = %d\n", n, for_fib(n));
}
