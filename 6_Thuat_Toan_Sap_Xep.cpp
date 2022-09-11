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

void QuickSort(int a[], int left, int right)
{
    int i, j, x;
    if (left >= right)
    {
        return;
    }
    x = a[(left+right)/2]; 
    i = left; j = right;
    while(i < j) {
        while(a[i] < x){
            i++;
        }
        while(a[j] > x){
            j--;
        }
        if(i <= j) {
            swap(a[i], a[j]);
            i++ ;
            j--;
        }
    }
    QuickSort(a, left, j);
    QuickSort(a, i, right);
}

void HeapSort (int a[], int left, int right)
{
    int x, i, j;
    i = left; 
    j =2*i+1; 
    x = a[i];
    while (j <= right)
    {
        if (j < right)
        { 
            if (a[j] < a[j+1])
            {
                j = j+1;
            }
        }
        if (a[j]<x)
        {
            break; 
        }
        a[i] = a[j];
        i = j; 
        j = 2*i+1;
    }
    a[i] = x;
}

void Xuatmang(int a[], int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
    int a[] = {12, 2, 8, 10, 1, 6, 4, 15};
    int N=8; 
    
    Xuatmang(a,N);
    printf("\nSelectionSort: ");
    SelectionSort(a,N);
    Xuatmang(a,N);
    printf("\nInsertionSort: ");
    InsertionSort(a, N);
    Xuatmang(a,N);
    printf("\nInterchange_Sort: ");
    Interchange_Sort(a,N);
    Xuatmang(a,N);
    printf("\nBubble_Sort: ");
    Bubble_Sort(a, N);
    Xuatmang(a,N);
    printf("\nQuickSort: ");
    QuickSort(a, N, N);
    Xuatmang(a,N);
    printf("\nHeapSort: ");
    HeapSort(a, N, N);
    Xuatmang(a,N);
}

