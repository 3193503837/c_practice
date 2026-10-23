#include <stdio.h>
int main()
{
	int i;
	int scores[5];
	printf("请输入5个成绩:\n");
	for (i=0;i<5;i++){
		scanf("%d",&scores[i]);
	}
	int sum,arg;
	for (i=0;i<5;i++){
		sum+=scores[i];
	}
	arg=sum/5;
	printf("总分：%d\n",sum);
	printf("平均分：%d\n",arg);
	int n,found=0;
	printf("请输入要查找的数：");
	scanf("%d",&n);
	for(i=0;i<5;i++){
		if(n==scores[i]){
			printf("找到了！位置是第%d个",i+1);
			found=1;
		}
	}
	if (found==0){
		printf("查找不到！");
	}
	return 0;
	
 } 
