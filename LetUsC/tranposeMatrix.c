#include <stdio.h>
void printarray(int arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
	printf("\n");
}
void swap(int* a, int* b) { //swapping the numbers
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}
int transpose(int arr[4][4]) {
   
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            if (i == j) break;
            swap(&arr[i][j], &arr[j][i]);
        }
    }
    return 0;
    
}
int main() {
    int matrix[4][4] = { { 188,2,9,4 },{ 456,12,6,9},{ -1,2,3,11},{ 1,2,3,4 } };
    printarray(matrix);
    transpose(matrix);
	printarray(matrix);
    return 0;
}
