#include <stdio.h>


int main() {
    int n, temp, a = 0, b = 1;
    printf("Enter a number upto which to print fibonacci series: ");
    scanf_s("%d", &n);
    if (n < 0) {
        printf("Not a valid input. Enter again: ");
        scanf_s("%d", &n);
    }
    if (n == 0 || n == 1) {
        return n;
    }
    printf("%d ", a);
    printf("%d ", b);
    
    for (int i = 0; i < n - 2; i++) {
        temp = b;
        b = a + b;
        printf("%d ", b);
        a = temp;

    }
    return 0;
}
