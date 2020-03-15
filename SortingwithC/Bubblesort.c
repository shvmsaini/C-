#include<stdio.h>
void swap(int* item1, int* item2) {
	int temp;
	temp = *item1;
	*item1 = *item2;
	*item2 = temp;

}
void bubblesort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
	

}
void printarray(int a[],int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
int main() {
	int ar[] = { 12,3,2,6,5 }; // 5 elements
	int n = sizeof(ar) / sizeof(ar[0]); // 20/4 = 5
	bubblesort(ar, n);
	printarray(ar,n);
	return 0;
}