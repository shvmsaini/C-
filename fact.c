#include<stdio.h>
int main() {
    long int n, fact = 1;
    scanf_s("%ld", &n);
    
    if (n == 1 || n==0) {
        printf("factorial is %ld", n);
        return 0;
    }
    if (n < 2) {
        printf("Not valid");
        return 0;
    }
    while (n != 1) {
        fact = fact * (n);
            n = n - 1;
    }
    printf("Factorial is %ld",fact);
    
    return 0;
}
