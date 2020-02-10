#include<stdio.h> 
int main()
{   
    int n;
    scanf_s("%d", &n);
    while ( (n > 26)  || (n<0)) {
        scanf_s("%d", &n);
    }
    int rowl =65+n, spl = -1, d = rowl - 1,f=rowl;
    for (int cr = 0; cr < n; cr++) {

        for (int b = 65; b < rowl; b++) {
            printf("%c", b);
        }

        for (int spa = 0; spa < spl; spa++) { //space loop
            printf("*");
        }
        
        for (int c = d; c > 64; c--) {
            if (c ==f-1 ) {
                continue;
            }
            printf("%c", c);
        }
        rowl -= 1;
        spl += 2;
        d -= 1;
        if (cr == n-1) {
            continue;
        }
        printf("\n");

    }
    
    return 0;
}
