#include<stdio.h>
int main() {
    int n, sum = 0, temp;
    printf("Enter number : ");
    scanf("%d", &n);
    temp = n;
    while (n >0) {
        sum = sum + ((n % 10) * (n % 10) * (n % 10));
        n = n / 10;
    }
    if (sum == temp) {
        printf("Armstrong :)");
    }
    else {
    printf("Nopes :(");
    }   
    
    
    
    return 0;
}
