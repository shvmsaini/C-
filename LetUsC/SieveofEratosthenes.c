#include<stdio.h>
void SieveOfEratosthenes(int n) {
	
	int* arr = new int[n] , j = 1;
	for (int i = 0; i < n; i++) { //setting up the array
		arr[i] = 1;

	}
	
	
	for (int j = 2; j*j < n; j++) {
		if (arr[j] == 1) {

			for (int i = j * j; i <n; i += j) {

				arr[i] = 0;
			}
		}

		
	}
	for (int p = 2; p <= n; p++) {
		if (arr[p] == 1) {	
			printf("%d ", p);
		}
	}
	delete[] arr; //https://stackoverflow.com/questions/28625465/c-creating-an-array-with-a-size-entered-by-the-user
}
int main() {
	printf("Enter the limit for printing prime numbers: ");
	int n;
	scanf_s("%d", &n);
	SieveOfEratosthenes(n);
	return 0;
}