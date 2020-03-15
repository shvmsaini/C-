#include<stdio.h>
void swap(int* item1, int* item2) {
	int temp;
	temp = *item1;
	*item1 = *item2;
	*item2 = temp;

}
void selectionsort(int arr[], int n) {
	
	for (int i = 0; i < n-1; i++) {
		int  mindex = i;
		for (int j = i+1; j < n; j++) {
			
			if (arr[mindex] > arr[j]) {
				mindex = j;

			}
			
		}
		if (mindex != i) {
			swap(&arr[mindex], &arr[i]);
		}
		
	}

}
void printarray(int a[],int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
int main() {
	int ar[] = {2,4,12,1,8}; // 5 elements
	int n = sizeof(ar) / sizeof(ar[0]); // 20/4 = 5
	selectionsort(ar, n);
	printarray(ar,n);
	return 0;
}