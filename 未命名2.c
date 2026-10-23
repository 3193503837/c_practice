#include <stdio.h>
int main()
 {
 	float num1,num2;
 	char y;
 	printf("请输入第一个数字:");
 	scanf("%f",&num1);
 	printf("请输入运算符:");
 	scanf(" %c",&y);
 	printf("请输入二个数字:");
 	scanf("%f",&num2);
 	switch (y){
 		case '+':
 			printf("%.2f+%.2f=%.2f",num1,num2,num1+num2);
 			break;
 		case '-':
 			printf("%.2f-%.2f=%.2f",num1,num2,num1-num2);
 			break;
 		case '*':
 			printf("%.2f*%.2f=%.2f",num1,num2,num1*num2);
 			break;
 		case '/':
 			if (num2==0){
 				printf("分母不能为零!");
			 }else {
			 	printf("%.2f/%.2f=%.2f",num1,num2,num1/num2);
			 }
	 }
	 return 0;
 }
