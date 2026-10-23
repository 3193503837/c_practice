#include <stdio.h>
#include <string.h>
void is_repeat(char*p){
	int i,len=strlen(p);
	for(i=0;i<=len/2;i++){
		if(p[i]!=p[len-i-1]){
			printf("%s不是回文",p);
			return;
		}
	}
	printf("%s是回文",p);
}
int main(){
	char str[100];
	printf("请输入字符串:");
	scanf("%s",str);
	is_repeat(str);
	return 0;
}
