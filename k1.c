#include <stdio.h>
int main()
{
	int x;
	printf("请输入一个（0到100000）的数:");
	scanf("%d",&x);
	printf("char=%d字节\n",sizeof(char));
	printf("short=%d字节\n",sizeof(short));
	printf("int=%d字节\n",sizeof(int));
	printf("long long=%d字节\n",sizeof(long long));
	printf("指针=%d字节\n",sizeof(int*));
	short y=(short)x;
	printf("转成short后=%d\n",y);
	printf("十六进制=0x%08X",x) ;
	return 0;
}
