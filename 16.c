#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++) {
        // 先打空格
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 再打*
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
