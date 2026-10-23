#include <stdio.h>
int main()
{
	int a=5,b=10,temp=0;
	int *p=&temp;
	*p=a;
	p=&a;
	*p=b;
	p=&b;
	*p=temp;
	printf("%d,%d,%d",a,b,temp);
	return 0;
}
