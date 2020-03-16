#include<stdio.h>
int main() {
    unsigned long long int fact = 1;
    int n;
    scanf("%d", &n);

    if (n == 1 || n==0) {
        printf("factorial is %d", 1);
        return 1;
    }
    if (n < 0) {
        printf("Not valid");
        return 0;
    }
    while (n != 1) {
        fact = fact * (n);
            n = n - 1;
    }
    printf("Factorial is %llu",fact);
    
    return 0;
}
