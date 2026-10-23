#include <stdio.h>
int main()
{
	int i=1,N,sum=0;
	printf("请输入N:");
	scanf("%d",&N);
	while (i<=N){
		sum=sum+i;
		i++;
}
	printf("1到%d的和为：%d",N,sum);
	return 0;
 } 
