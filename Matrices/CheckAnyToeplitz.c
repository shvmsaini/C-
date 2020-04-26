#include <stdio.h>

int toeplitz(int A[][6],int Row,int Col) {
	
	int y = 0;
	int key;
	int size = sizeof(A[0])/sizeof(int);
	for (int i = 0; i < size-1;i++) { // upper half
		key = A[0][i];
		printf("Key = %d ***** ", key);
		for (int j = 0; j < Row && j+y < Col; j++) {
			if (key != A[j][j+y]) {
				return 0;
			}
		}
		printf("upper check\n");
		key = A[i][0];
		printf("Key = %d ***** ", key);
		for (int j = 0; j+y < Row && j  < Col; j++) {
			if (key != A[j+y][j]) {
				return 0;
			}
		}
		printf("lower check\n");
		y++;
	}
	return 1;	
}

int main() {	
	/* int A[][5] = {
		{2,3,4,5,6},
		{7,2,3,4,5},
		{8,7,2,3,4},
		{9,8,7,2,3},
		{0,9,8,7,2},
		{1,0,9,8,7}
	}; */
	int B[][6]={
		{1,3,4,5,6,7},
		{7,2,3,4,5,6},
		{8,7,2,3,4,5},
		{9,8,7,2,3,4},
		{2,9,8,7,2,3},
	};
	
	
	/*toeplitz(A,6,5)==0? (printf("No")) : printf("Yes");*/
	toeplitz(B,5,6)==0?(printf("No")) : printf("Yes");
	
	return 0;
}
