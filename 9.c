#include <stdio.h>
int main()
{
	double basis,salary;
	int year;
	printf("您的基本工资：");
	scanf("%lf",&basis);
	printf("您的工龄：");
	scanf("%d",&year);
	if(year>=10){
		salary=basis*1.2;
	}else if(year>=5){
		salary=basis*1.1;
	}else{
		salary=basis;
	}
	if(salary>20000){
		salary=salary*0.9;
	}
	printf("您的最终工资是：%.2f",salary);
	return 0;
}
