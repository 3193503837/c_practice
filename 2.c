#include <stdio.h>
int main()
{
	printf("====购物计算器====\n");
	int num;
	double price,discount;
	printf("请输入商品单价：");
	scanf("%lf",&price);
	printf("请输入购买数量：");
	scanf("%d",&num);
	printf("请输入折扣：");
	scanf("%lf",&discount);
	printf("\n====账单====\n");
	printf("商品单价：%.2f\n",price);
	printf("购买数量：%d\n",num);
	printf("折扣：%.1f\n",discount);
	printf("折前小计：%.2f\n",price*num);
	printf("折后金额：%.2f\n",price*num*discount);
	printf("运费：%s\n",(price*num*discount>=500)?"0.00元":"免运费");
	printf("应付金额：%.2f",price*num*discount);
	return 0;
}
