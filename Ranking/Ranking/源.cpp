#include <stdio.h>
void choice(int* a, int n)
{
    int i, j, temp;
    int q = 1;
    for (i = 0; i < n - 1; i++)
    {
        printf("µÚ%d´ÎÅÅÐò:\n", q);
        q = q + 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                for (int k = 0; k < n; k++) {
                    printf("%d  ", a[k]);
                }
                printf("\n");
            }
        }
    }
}
int main(int argc, char* argv[])
{
    int a[10] = { 2,4,7,1,6,9,8,3,0,5 };
    int i;
    choice(a, 10);
    printf("\n");
    return 0;
}