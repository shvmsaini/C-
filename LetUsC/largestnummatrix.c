#include <stdio.h>
int largest(int arr[5][5]) {
    int max = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main() {
    int matrix[][5] = { { 188,2,9,4,5 },{ 1,12,6,9,5 },{ -1,2,3,11,5 },{ 1,2,3,4,5 },{ 121,2,3,8,0 } };
   
    printf("The largest number is %d", largest(matrix));
    return 0;
}
