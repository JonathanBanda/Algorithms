/*

Insert sort

*/


# include <stdio.h>

void insertSort(int A[], int N)
{
	int i, k, key;
	for (i = 0; i < N; i+)
	{
		key = A[i];
		K = I - 1;
		while((k >= 0)&&(A[K] > key))
		{
			A[k+1] = A[k];
			k--;
		}
		A[k+1] = key;
	}
}







