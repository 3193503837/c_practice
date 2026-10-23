#include <stdio.h>
int main()
{
	int n,k;
	printf("n:");
	scanf("%d",&n);
	printf("k:");
	scanf("%d",&k);
	printf("执行时刻：");
	int i,count=0;
	for(i=1;i<=n;i++){
		if(i%k==0){
			count++;
			printf("%d ",i);//一边输出一边记录执行时刻 
		} 
	}
	int rest=n%k;
	printf("定时任务执行%d次,剩余%d轮",count,rest);
	return 0;
}
