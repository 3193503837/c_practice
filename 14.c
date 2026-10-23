#include <stdio.h>
int main()
{
	int a,b=1,c;
	printf("请输入一个正整数:");
	scanf("%d",&a);
	c=a;
	while (c>=10){
		c=c/10;
		b++;
	}
	printf("%d是%d位数",a,b);
	return 0;
}
