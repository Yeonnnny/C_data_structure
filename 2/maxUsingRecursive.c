#include <stdio.h>
#include <stdlib.h>

int findMax(int *arr, int n)
{

	if(n == 1)
	{
	    printf("findMax(%d) = %d\n", n, arr[0]);
	    return arr[0];
	}


	int max_rest = findMax(arr+1, n-1);

	if(arr[0] > max_rest)
	{
	    printf("findMax(%d) = %d\n", n, arr[0]);
	    return arr[0];
	}
	else{
	    printf("findMax(%d) = %d\n", n, max_rest);
	     return max_rest;
	}

}

int main(void)
{
	int arr[] = {2,5,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	int max = findMax(arr, n);
	printf("Max : %d\n", max);

	return 0;
}
