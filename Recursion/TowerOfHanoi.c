#include<stdio.h>
void tower(int n, int A,int B,int C) {
	if (n > 0) {
		tower(n - 1, A, C,B);
		printf("move disk from %d to %d\n", A,C);
		tower(n - 1, B,A,C );
	}
	
}

int main() {
	int a,b,c;
	tower(3,1,2,3);
	return 0;
}
