#include <stdio.h> 
#include <string.h> 

int main()
{
    char str[20];
    scanf_s("%s", str,20);
    int h[26] = {0}, i;
    for (i = 0; str[i] != '\0'; i++) {
        h[str[i] - 97] += 1;
    }   
    for (i = 0; i < 26; i++) {
        if (h[i] > 1) {
            printf("%c", i + 97);
            printf("%d", h[i]);
        }
    }
    return 0;
}
