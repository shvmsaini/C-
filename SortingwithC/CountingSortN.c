#include <stdio.h> 

void printArray(int arr[],int size)
{
	for (int i = 0; i <size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int findMax(int A[], int n)
{
	int max = A[0];
	int i;
	for (i = 0; i < n; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	return max;
}
int findMin(int A[], int n)
{
	int min = A[0];
	int i;
	for (i = 0; i < n; i++)
	{
		if (A[i] < min)
			min = A[i];
	}
	return min;
}

void countSort(int arr[], int size)
{
	int max =findMax(arr,size);  
	int min = findMin(arr,size); 
	int range = max - min + 1; 
	
	int* output = new int[size];
	int *count = new int[range];

	for (int i = 0; i < range; i++){
		count[i] = 0;
	}

	for (int i = 0; i <size; i++)
		count[arr[i] - min]++; 
	
	for (int i = 1; i < range; i++)
		count[i] += count[i - 1];
	
	
	for (int i = size-1; i >= 0; i--)
	{
		output[count[arr[i] - min] - 1] = arr[i];
		
		count[arr[i] - min]--;
	}
	
	for (int i = 0; i < size; i++)
		arr[i] = output[i];
}

int main()
{
	int arr[] = { -3, 8, 5,10, -1 };
	int size = sizeof(arr) / sizeof(arr[0]); //8 max = 10   min=-10
	printf("Before : ");
	printArray(arr, size);
	countSort(arr,size);
	printf("After : ");
	printArray(arr,size);
	return 0;
}
