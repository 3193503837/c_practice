#include <stdio.h>
int main()
{
	int num1,num2;
	char y;
	printf("请输入第一个数字：");
	scanf("%d",&num1);
	printf("请输入运算符：");
	scanf(" %c",&y);
	printf("请输入第二个数字：");
	scanf("%d",&num2);
	if(y=='+'){
		printf("%d+%d=%d",num1,num2,num1+num2);
	}else if(y=='-'){
		printf("%d-%d=%d",num1,num2,num1-num2);
	}else if(y=='*'){
		printf("%d*%d=%d",num1,num2,num1*num2);
	}else if(y=='/'){
		if(num2==0){
			printf("第二个数错误输入！");
			return 1;
		}else {
			printf("%d/%d=%.2f",num1,num2,(float)num1/num2);
		}
	}else{
		printf("运算符错误输入！");
		return 1;
	} 
	return 0;
}
