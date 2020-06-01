#include<stdio.h>

void merger(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100] = {0};
    i = l, j = mid + 1, k = l;
    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        }
        else {
            B[k++] = A[j++];
        }
    }
    for (; i <= mid; i++) {
        B[k++] = A[i];
    }
    for (; j <= h; j++) {
        B[k++] = A[j];
    }
    for (i = l; i <= h; i++) {
        A[i] = B[i];
    }

}
void MergeSort(int A[], int l, int h) {
    if (l < h) {
        int m = l + (h - l) / 2; //avoids potential overflow if l&h are large
        MergeSort(A, l, m);
        MergeSort(A, m + 1, h);
        merger(A, l, m, h);
    }
}
int main() {
    int A[] = { 11,13,7,12,1,-1 }, n = 6, i;
    printf("Before : ");
    for (i = 0; i < n; i++) { printf("%d ", A[i]); }
    printf("\n");
    MergeSort(A, 0,n - 1);
    printf("After : ");
    for (i = 0; i < n; i++) { printf("%d ", A[i]); }
    printf("\n");
    return 0;
}

