#include<stdio.h>

int fact(int num) {
    unsigned long long int fact = 1;

    if (num == 1 || num == 0) {
        return 1;
    }

    while (num != 1) {
        fact = fact * (num);
        num = num - 1;
    }
    return fact;
}

int binomialcoef(int n, int k) {
    
    return (fact(n) / (fact(k) * fact(n - k)));

}
int pascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialcoef(i, j));
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int n;
    printf("How many rows? ");
    scanf_s("%d", &n);
    pascal(n);
    return 0;
}
