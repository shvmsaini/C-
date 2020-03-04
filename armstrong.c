#include<stdio.h>

int main() {
    int n, sum = 0, temp,count=0,pow=1;
    printf("Enter number : ");
    scanf_s("%d", &n);
    temp = n;
    while (n > 0) {
        n = n / 10;
        count += 1;
    }
    printf("Count : %d\n", count);
    n = temp;
    while (n > 0) {
        for (int i=0; i<count; i++) {
            pow *= n % 10;
        }

        sum = sum + pow;
        pow = 1;
        n = n / 10;
    }
   
    (sum == temp)?printf("Armstrong :)"):printf("Nopes :(");
    return 0;
}
