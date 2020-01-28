#include<stdio.h>
int main() {
    int n, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        int r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (sum == temp) {
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }

    return 0;
}
