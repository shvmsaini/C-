#include <stdio.h> 
int main()
{ 
    char A[20];
    scanf_s("%s", A,20);
    char B[20];
    scanf_s("%s", B, 20);
    int H[26] = { 0 }, i;
    for (i = 0; A[i] != '\0'; i++) {
        if (A[i] >= 65 && A[i] <= 90) { //to convert to lower case i.e. to ignore cases
            A[i] += 32;
        }
        H[A[i]-97] += 1;    
    }

    for (i = 0; B[i] != '\0'; i++) {
        if (B[i] >= 65 && B[i] <= 90) { //to convert to lower case i.e. to ignore cases
            B[i] += 32;
        }
        H[B[i] - 97] -= 1;
        if (H[B[i] - 97]< 0) {
                printf("Not anagram\n");
                break;
        }  
    }
    if (B[i] == '\0')
        printf("It's Anagram");

    return 0;
}
