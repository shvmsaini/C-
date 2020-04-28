#include<stdio.h>
#include<stdlib.h>
int toeplitz(int *A, int Row, int Col) {

	int y = 0;
	int key,size;
	if (Row > Col) {
		size = Row;
	}
	else {
		size = Col;
	}
	
	printf("%d\n", size);
	for (int i = 0; i < size - 1; i++) { // upper half
		key = *(A+i);
		printf("Key = %d ***** ", key);
		for (int j = 0; j < Row && j + y < Col; j++) {
			if (key != A[(j*Col)+j+y]) {
				return 0;
			}
		}
		printf("upper check\n");
		key = *(A + i*Col);
		printf("Key = %d ***** ", key);
		for (int j = 0; j + y < Row && j < Col; j++) {
			if (key != A[(j+y) * Col + j]) {
				return 0;
			}
		}
		printf("lower check\n");
		y++;
	}
	return 1;
}
//void foo(int* mat, int r, int c) {
//	for (int i = 0; i < r; i++)
//		for (int j = 0; j < c; j++)
//			printf("%d ", *(mat + i * c + j));
//}
int main() {
	int p[][5] = { { 1,2,3,4,5 },{ 6,7,8,9,10} };
	int A[][5] = {
		{2,3,4,5,6},
		{7,2,3,4,5},
		{8,7,2,3,4},
		{9,8,7,2,3},
		{8,9,8,7,2},
		{1,8,9,8,7}
	}; 
	int B[][6] = {
		{2,3,4,5,6,7},
		{7,2,3,4,5,6},
		{8,7,2,3,4,5},
		{9,8,7,2,3,4},
		{2,9,8,7,2,3},
	};

	toeplitz(A[0], 6, 5) == 0 ? (printf("No\n")) : printf("Yes\n");
	toeplitz(B[0], 5, 6) == 0 ? (printf("No\n")) : printf("Yes\n");
	
	
	
	
	return 0;
}
