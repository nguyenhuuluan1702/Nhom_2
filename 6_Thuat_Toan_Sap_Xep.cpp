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
