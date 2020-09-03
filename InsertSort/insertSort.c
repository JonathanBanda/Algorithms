/*

Insert sort

*/


# include <stdio.h>

void insertSort(int A[], int N)
{
	int i, k, key;
	for (i = 0; i < N; i++)
	{
		key = A[i];
		k = i - 1;
		while((k >= 0)&&(A[k] > key))
		{
			A[k+1] = A[k];
			k--;
		}
		A[k+1] = key;
	}
}

int main(void)
{
	int A[] = {9,8,7,6,5,4,3,2,1,0};
	int N = sizeof(A)/sizeof(A[0]);

	int i;

	insertSort(A, N);

	for(i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}

	return 0;

}





