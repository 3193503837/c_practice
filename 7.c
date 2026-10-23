#include <stdio.h>
int main()
{
	int num1=42,num2;
	printf("请输入你的数字：");
	scanf("%d",&num2);
	if (num2>42){
		printf("猜大了");
	}else if (num2==42){
		printf("猜对了！");
	}else if (num2<42){
		printf("猜小了");
	}
	return 0;
}
