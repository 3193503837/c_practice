#include <stdio.h>
int main()
{
	double win[5];
	int i;
	for(i=1;i<=5;i++){
		printf("初始值%d: ",i);
		scanf("%lf",&win[i-1]);
	}
	int m,n;
	printf("新数值个数:");
	scanf("%d",&m);
	for(n=1;n<=m;n++){//输入新数值 
		double new;
		scanf("%lf",&new);//滑动窗口 
		for(i=1;i<5;i++){
			win[i-1]=win[i];
		}
		win[4]=new;
		double arg,sum;
		sum=win[0]+win[1]+win[2]+win[3]+win[4];
		arg=sum/5;
		printf("窗口%d平均=%.2f",n,arg);
	}
	return 0;
}
