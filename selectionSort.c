void selectionSort(int a[], int n)
{
	int i, j, maxIdx, temp;
	
	for(i = 0; i < n; i++)
	{
		maxIdx = i;
		for(j = i + 1; j < n; j++)
		{
			if(a[j] > a[maxIdx])
				j = maxIdx;
		}
		
		temp = a[i];
		a[i] = a[maxIdx];
		a[maxIdx] = temp;
	}
}