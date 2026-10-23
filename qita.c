#include <stdio.h>
int main()
{
	int a=sizeof(int*),x=40000;
	printf("%d\n",a);
	printf("0x%08X\n",x);
	return 0; 
}
