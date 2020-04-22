#include <stdio.h> 
int main()
{
    char str[20];
    scanf_s("%s", str,20);
    int H = 0, x = 0,i;
    for (i = 0; str[i] != '\0'; i++) {
        x = 1; 
        /* if (str[i] - 97 < 0) continue; */ //add this condition to not to avoid cases
        x = x << str[i] - 97;
        if ((x & H) > 0) {
            printf("%c is duplicate ", str[i]);
        }
        else
            H = x | H;
    }

    return 0;
}
