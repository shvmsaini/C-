#include<stdio.h> 
int main()
{
    int rowl = 72, spl = -1, d = 70;
    for (int cr = 0; cr < 7; cr++) {
        for (int b = 65; b < rowl; b++) {
            printf("%c", char(b));
        }
        for (int spa = 0; spa < spl; spa++) {
            printf(" ");
        }
        
        if (cr == 0) {
            printf("FEDCBA\n");
            rowl -= 1;
            spl += 2;
            continue;
        }
        for (int c = d; c > 64; c--) {
            printf("%c", char(c));
        }
        rowl -= 1;
        spl += 2;
        d -= 1;
        printf("\n");

    }
    return 0;
}
