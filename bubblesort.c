#include<stdio.h>
#define size 5
void BubbleSort(int arr[], int n);
void Display(int arr[], int n);
int main()
{
	int arr[5] = { 25, 4, 7, 8, 35 };
	BubbleSort(arr, 5);
	Display(arr, 5);
	return 0;
}

void Display(int arr[], int n)
{
	int j;
	for (j = 0; j < n; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}

void BubbleSort(int arr[], int n)
{
	int passes = n - 1;
	int comparison = n - 1;
	int i, j, temp;
	for (i = 0; i < passes; i++)
	{
		for (j = 0; j < comparison - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
