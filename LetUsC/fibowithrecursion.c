#include<stdio.h>
void fibo(int n) {
    static int n1=0, n2=1, n3;
    if (n > 0){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d\n",n3);
        fibo(n-1);
    }
}
int main() {
    int n,temp, a = 0, b = 1;
    printf("%d\n%d\n", a,b);
    scanf("%d", &n);
    fibo(n - 2);
    return 0;
}
