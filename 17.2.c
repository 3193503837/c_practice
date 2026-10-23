#include <stdio.h>

int main()
{
    int n, i, j;
    int count = 0;

    printf("请输入n：");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        int is_prime = 1;  // 假设是素数
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;  // 能被整除，不是素数
                break;         // 不用再判断了
            }
        }
        if (is_prime) {
            count++;
        }
    }

    printf("1到%d之间有%d个素数\n", n, count);
    return 0;
}
