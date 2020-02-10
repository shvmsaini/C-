#include<stdio.h>
int main() {
    int n,i=1;
    scanf("%d", &n); //Enter Number
    int temp = n;
    while (n > 0) {
        int a = n % 10;
        if (a == 9) {
            temp = temp - 9 * i;
            i *= 10;
            n = n / 10;
            continue;
        }
        else {
            a++;
        }
        temp = temp + 1 * i;
        i *= 10;
        n = n / 10;
            
    }
    printf("%d", temp);
    
    
    return 0;
}
