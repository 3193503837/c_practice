#include <stdio.h>
int main()
{
	int s,h,s1,m,s2;
	printf("请输入总秒数：");
	scanf("%d",&s);
	h=s/3600,s1=s%3600;
	m=s1/60,s2=s1%60;
	printf("%d秒=%d时%d分%d秒",s,h,m,s2);
	return 0;
}
