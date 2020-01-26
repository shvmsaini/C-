int main() {
    int n,temp, a = 0, b = 1;
    printf("%d\n", a);
    printf("%d\n", b);
    scanf("%d", &n);
    for (int i = 0; i < n-2; i++) {
        temp = b;
        b = a + b;
        printf("%d\n", b);
        a = temp;
        
    }
    return 0;
}
