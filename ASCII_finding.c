#include <stdio.h>

int main()
{
    char n;
    printf("Enter a character : ");
    scanf_s("%c", &n);
    printf("The ASCII value of the character is %d\nThe Charater is a ", int(n));
    
    
    if (int(n)>=65 && int(n)<=90) {
        printf("capital letter.");
    }
    else if (int(n) >= 97 && int(n) <= 122) {
        printf("small letter.");
    }
    else if (int(n) >=48 && int(n) <= 57) {
        printf("integer.");
    }
    else if ((int(n) >= 0 && int(n) <= 47) || (int(n) >= 58 && int(n) <= 64) || (int(n) >= 91 && int(n) <= 96) || (int(n) >= 123 && int(n) <= 127)) {
        printf("special character.");
    }
    return 0;
}
