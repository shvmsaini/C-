#include<stdio.h> 
int main()
{
    int var = 1,k=3,l=1,m=1;
    for (int i = 0; i < 4; i++) {
        for (int j =0; j < k; j++) {
            printf("*");
        }
        for (int p = 0; p < l; p++) {
            printf("%d", m);
            if (p != l-1) {
                printf("*");
            }
            m += 1;
        }
        for (int j = 0; j < k; j++) {
            printf("*");
        }
        printf("\n");
        l += 1;
        k -= 1;
    }

    
    return 0;
}
