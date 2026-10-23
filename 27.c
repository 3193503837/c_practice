#include <stdio.h>
int my_strlen(char*s){
		int len=0;
		for(;*s!='\0';s++){
			len++;
		}
		return len; 
}
int main()
{
	char str[20];
	printf("ÇëÊäÈë×Ö·û:");
	scanf("%s",str);
	printf("%d",my_strlen(str));
	return 0;
}
 
