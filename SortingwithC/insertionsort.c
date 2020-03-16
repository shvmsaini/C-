#include<stdio.h>
void swap(int* item1, int* item2) {
	int temp;
	temp = *item1;
	*item1 = *item2;
	*item2 = temp;

}
void insertionsort(int arr[], int n) {

	for (int i = 1; i < n; i++){ 
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;

	}

}
void printarray(int a[],int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
int main() {
	int ar[] = {-1,4,4,2,0}; // 5 elements
	int n = sizeof(ar) / sizeof(ar[0]); // 20/4 = 5
	insertionsort(ar, n);
	printarray(ar,n);
	return 0;
}