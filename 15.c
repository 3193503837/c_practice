#include <stdio.h>
int main ()
{
	int a=42,num,count=0;
	do{
		count++;
		printf("猜一个数字：");
		scanf("%d",&num);
		printf("%s",(num>a)?"大了\n":
		(num==a)?"对了\n":"小了\n" );
	}while(num!=a);
	printf("猜了%d次",count);
	return 0;
 } 
