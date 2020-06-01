#include <stdio.h>
#include<string.h>
//#include<ctype.h> //Use this if you want to check palindrome ignoring cases


int main() {
    char ar[21];
    printf("Enter a string upto 20 characters: ", ar);
    fgets(ar,21,stdin);
    /*gets_s(ar); *///or this 
    int n = strlen(ar);
    printf("String length is : %d\n", n); 
    for (int i = 0; i < n; i++) {
        /*if (tolower(ar[i]) == tolower(ar[n-1])) { //Use this if you want to check palindrome ignoring cases
            n--;
           
        }*/
        if (ar[i] == ar[n - 1]) {
            n--;
        }
        else {
            printf("This String is not a palindrome :( ");
            return 0;
        }
    }
    printf("This String is a palindrome :) ");
    return 1;
}
