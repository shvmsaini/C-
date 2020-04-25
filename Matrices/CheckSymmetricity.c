#include <stdio.h>
int sym(int A[][5],int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) { // J < i to only check lower half of the matrix
            if (A[i][j] != A[j][i]){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int A[][5]{ {2,1,2,2,2},
        {2,3,3,3,3},
        {2,3,4,4,4},
        {2,3,4,5,5},
        {2,3,4,5,6}
    };
    (sym(A, 5) == 0) ? (printf("No")) : printf("Yes");
    

    return 0;
}
