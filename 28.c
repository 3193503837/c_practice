#include <stdio.h>
#include <string.h>
int main()
{
	char str[20];
	printf("ÇëÊäÈë×Ö·û´®:");
	scanf("%s",str);
	int i,len=strlen(str);
	for(i=len;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
