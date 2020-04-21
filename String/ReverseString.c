#include<stdio.h>

int main() {
	
	char A[10], B[10];
	scanf_s("%s",A,10);
	int i = 0,j;
	while( A[i] != '\0') {
		i++;
	}
	i--;

	for (j = 0; i >= 0; i--, j++) {
		B[j] = A[i];
	}
	B[j] = '\0';
	printf("%s", B);

}
