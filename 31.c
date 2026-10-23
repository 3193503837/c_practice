#include <stdio.h>

int main()
{
    char *day[7]={"星期日","星期一","星期二","星期三","星期四","星期五","星期六"};
    int n;
    printf("请输入数字:");
    scanf("%d",&n);
    printf("%s",day[n]);
	return 0;
}
