#include <stdio.h>  
void perm( char S[],int k) {
    static int A[10] = { 0 };
    int i;
    static char R[10];
    if (S[k] == '\0') {
        R[k] = '\0';
        printf("%s\n", R);
       
    }
    else {
        for (i = 0; S[i] != '\0'; i++) {
            if (A[i] == 0) {
                R[k] = S[i];
                (A[i] = 1);
               
                perm(S, k + 1);
                A[i] = 0;
            }

        }
    }
   
}
int main(){
    char s[] = "ABC";
    perm(s, 0);
    return 0;
}
