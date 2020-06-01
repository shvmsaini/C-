#include <stdio.h> 
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
}**Buckets;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int findMax(int A[], int n) {
    int i, max = A[0];
    for (i = 0; i < n; i++) {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
void Insert(struct Node** p, int x)
{
    while (*p !=NULL) {
        p = &(*p)->next;
    }

    *p = new Node;
    (*p)->data= x;
    (*p)->next = NULL;

}
int Delete(struct Node** p)
{
    int temp = (*p)->data;
    struct Node* del = *p;

    *p = (*p)->next;

    delete del;
    return temp;
}

void BucketSort(int A[], int size) {
    int max, i, j;
    max = findMax(A, size);

    Buckets = new Node * [max + 1];
    for (i = 0; i < max + 1; i++) {
        Buckets[i] = NULL;
    }
    for (i = 0; i < size; i++) {
        Insert(&Buckets[A[i]], A[i]);
    }
    i = j = 0;
    while (i < max + 1) {
        while (Buckets[i]) {
            A[j++] = Delete(&Buckets[i]);
        }
        i++;
    }
   
}

int main()
{
    int arr[] = { 3,1, 8, 5, 1, 10 };
    int size = sizeof(arr) / sizeof(arr[0]); //5
    printf("\nBefore : ");
    printArray(arr, size);

    BucketSort(arr, size);

    printf("\nAfter : ");
    printArray(arr, size);

    return 0;
}
