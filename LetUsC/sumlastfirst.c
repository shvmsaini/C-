#include <stdio.h>

int main()
{
    int n, sum = 0, temp;
    printf("Enter a number : ");
    scanf_s("%d", &n);
    temp = n;
    while (n > 0) {
        if (n < 10) {
            sum = sum + (n % 10);
        }
        if (n == temp) {
            sum = sum + (n % 10);
        }
        n = n / 10;
    }

    printf("The sum of the first and last digit is %d", sum);
    return 0;
}
