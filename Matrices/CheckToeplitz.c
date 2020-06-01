#include <stdio.h>
int toeplitz(int A[][5],int size) {
	int y = 0;
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size-i; j++) {
			if (A[j+y][j] != A[j+1+y][j+1]) {
				return 0;
			}
		}
		if (i == 1 || i ==size-1) {
			y++;
			continue;
		}
		printf("lower check \n");
		for (int j = 0; j < size - i; j++) {
			if (A[j][j + y] != A[j + 1][j + 1 + y]) {
				return 0;
			}
		}
		y++;
		printf("uppper check \n");
	}
	return 1;
}	

int main() {
	int A[][5] = {
		{2,3,4,5,6},
		{7,2,3,4,5},
		{8,7,2,3,4},
		{9,8,7,2,3},
		{0,9,8,7,2}
	};
	toeplitz(A,5)==0? (printf("No")) : printf("Yes");
	return 0;
}
