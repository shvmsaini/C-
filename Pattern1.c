#include<stdio.h> 
int main()
{
    int rowl = 72, spl = -1, d = 71;
    for (int cr = 0; cr < 7; cr++) {
        for (int b = 65; b < rowl; b++) {
            printf("%c", b);
        }
        for (int spa = 0; spa < spl; spa++) { //space loop
            printf(" ");
        }
        
 
        for (int c = d; c > 64; c--) {
            if (c == 71) {
                continue;
            }
            printf("%c", c);
        }
        rowl -= 1;
        spl += 2;
        d -= 1;
        if (cr == 6) {       //to remove the last space in the loop
            continue;
        }
        printf("\n");

    }
    return 0;
}
