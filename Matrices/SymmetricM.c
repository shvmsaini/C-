
#include <stdio.h>
#include <stdlib.h>
struct Matrix
{
    int* A;
    int n;
};
void Set(struct Matrix* m, int i, int j, int x)
{
    if (i >= j)
        m->A[m->n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j] = x;
} 
int Get(struct Matrix m, int i, int j)
{
    if (i >= j)
        return m.A[m.n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j];
    else
        return m.A[m.n * (i - 1) + (i - 2) * (i - 1) / 2 + j - i];
}
void Display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
                printf("%d ", m.A[m.n * (j - 1) +   (j - 2) * (j - 1) / 2 + i - j]);
            else
                printf("%d ", m.A[m.n * (i - 1) + (i - 2) * (i - 1) / 2 + j - i]);
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix m;
    int i, j, x;
    
    printf("Enter Dimension");
    scanf_s("%d", &m.n);
    m.A = (int*)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    printf("enter all elements");
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            scanf_s("%d", &x);
            Set(&m, i, j, x);
        }
    }
    printf("\n\n");
    printf("%d\n",Get(m,3,2));
    Display(m);

    return 0;
}
