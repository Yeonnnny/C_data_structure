// 거듭 제곱

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 반복문
double for_power(double x, int n)
{
	int i;
	double result = 1.0;
	for(i=0;i<n;i++){
	    result *= x;
	}
	return result;
}

// 순환
double power(double x, int n)
{
	if(n==0)
	    return 1;
	else if(n%2==0)
	    return power(x*x, n/2);
	else
	    return x*power(x*x, (n-1)/2);
}


int main(void)
{
	double r1,r2,t1,t2,x = 2;
	int n = 10;
	clock_t start, stop;

	start = clock();
	r1 = for_power(x,n);
	stop = clock();
	t1 = (double)(stop-start)/CLOCKS_PER_SEC;
	printf("반복 : %f (%f sec)\n", r1,t1);

	start = time(NULL);
	r2 = power(x,n);
	stop = time(NULL);
	t2 = (double)(stop-start)/CLOCKS_PER_SEC;
	printf("순환 : %f (%f sec)\n", r2, t2);

	return 0;
}
