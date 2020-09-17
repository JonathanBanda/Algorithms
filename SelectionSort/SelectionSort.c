/*
sort array A in ascending order.
N is the number of elements in A.
*/

void selectionSort(int A[], int N)
{
	int i, k, temp;

	for(i = 0; i < N-1; i++)
	{
		//min_idx: index of smallest remainng items
		
		int min_idx = i;
		for(k = i+1; k < N; k++)
		{
			if(A[k] < A[min_idx])
			{
				min_idx = k;
			}
		// swap A[min_idx] <-> A[i]
		}

		temp = A[min_idx];
		A[min_idx] = A[i];
		A[i] = temp;
	}
}

