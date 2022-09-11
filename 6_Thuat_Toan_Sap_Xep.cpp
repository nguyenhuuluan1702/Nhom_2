#include<stdio.h>

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void SelectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
    min = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min])
        min = j;
 
        swap(arr[min], arr[i]);
    }
}

void InsertionSort(int a[], int n)
	{	
	int pos, x;
	for(int i = 1; i < n; i++)
	{ 
		x = a[i]; 
		pos = i;
		while(pos > 0 && x < a[pos-1])
		{
			a[pos] = a[pos-1];	
			pos--;
		}
		a[pos] = x;
	}
}

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

