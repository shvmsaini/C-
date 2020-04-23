#include <stdio.h> 
void swap(char *a,char  *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void perm( char S[],int l,int h) {
     int i;
    if (l == h) {
            printf("%s\n", S);
       
        }
    else{
        for (i=l; i <=h ; i++) {
            swap(&S[l], &S[i]);
            perm(S, l + 1, h);
            swap(&S[l], &S[i]); 
        }
   }
    
}
int main(){
    char s[] = "ABC";
    perm(s, 0,2);
    return 0;
}
