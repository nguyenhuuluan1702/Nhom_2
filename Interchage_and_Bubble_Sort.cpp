void Interchange_Sort(int a[], int n)
{
	for(int i = 0; i<n; i++)
		for(int j = i+1; j<n; j++)
			if(a[i] > a[j])
			swap(a[i], a[j]);
}

void Bubble_Sort(int a[], int n)
{
	for(int i = 0; i<n-1; i++)
		for(int j=n-1; j>i; j--)
			if(a[j] < a[i-1])
			swap(a[j], a[j-1]);
}
