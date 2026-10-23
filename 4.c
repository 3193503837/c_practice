#include <stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("请输入三个学生的成绩:");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n====成绩分析====\n");
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	min=(a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("成绩1：%d%s\n",a,(a>=90)?"(优秀)":(a>80)?"（良好）":(a>60)?"（及格）":"(不及格)");
	printf("成绩2：%d%s\n",b,(b>=90)?"(优秀)":(b>80)?"（良好）":(b>60)?"（及格）":"(不及格)");
    printf("成绩3：%d%s\n",c,(c>=90)?"(优秀)":(c>80)?"（良好）":(c>60)?"（及格）":"(不及格)");
    printf("总分：%d",a+b+c);
    printf("平均分：%.1f",(a+b+c)/3.0);
    printf("最高分：%d",max);
    printf("最低分：%d",min);
    return 0;
}
