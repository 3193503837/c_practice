#include <stdio.h>
int main()
{
	int year=2024;
	int is_leap;
	is_leap=(year%4==0&&year%100!=0)||(year%400==0);
	printf("%d年是%s\n",year,is_leap?"闰年":"平年");
	return 0 ;
}
