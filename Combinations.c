#include<stdio.h> 
int main()
{
    int arr[3] = { 1,2,3 };
    for (int item = 0; item < 3; item++) {
        for (int item1 = 0; item1 < 3; item1++) {
            for (int item2 = 0; item2 < 3; item2++) {
                if ((item != item1) && (item2 != item1) && (item != item2)) {
                    printf("%d%d%d\n", arr[item], arr[item1], arr[item2]);
                }
            }
        }
    }

    
    return 0;
}
