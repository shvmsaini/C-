#include<stdio.h>

int main() {
	
	char A[10],temp;
	scanf_s("%s",A,10);
	int i = 0,j;
	while( A[i] != '\0') {
		i++;
	}
	i--;

	for (j = 0; j < i; i--, j++) { //swapping
		temp = A[j]; 
		A[j] = A[i];
		A[i] = temp;
	}
	
	printf("%s", A);

}
