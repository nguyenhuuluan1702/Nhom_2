#include<stdio.h>

void swap(int & xp, int & yp) {
    int temp = xp;
    xp = yp;
    yp = temp;
}
void SelectionSort(int arr[], int n) {
        int i, j, min;
        for (i = 0; i < n - 1; i++) {
            min = i;
            for (j = i + 1; j < n; j++)
                if (arr[j] < arr[min])
                    min = j;

            swap(arr[min], arr[i]);
        }
}

void InsertionSort(int arr[], int n) {
	int pos, x;
	for (int i = 1; i < n; i++) {
		x = arr[i];
		pos = i;
		while (pos > 0 && x < arr[pos - 1]) {
			arr[pos] = arr[pos - 1];
			pos--;
		}
		arr[pos] = x;
	}
}

int main()
{
	return 0;

}