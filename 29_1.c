#include <stdio.h>
void type_num(char *str){
	int num1=0,num2=0,num3=0;
	for(;*str!='\0';str++){
		if((*str>='a'&&*str<='z') || (*str>='A'&&*str<='Z')){
			num1++;
		}else if(*str>='0'&&*str<='9'){
			num2++;
		}else{
			num3++;
		}
	}
	printf("字母有%d个，数字有%d个，其他字符有%d个",num1,num2,num3-1); 
}
int main(){
	int str[100];
	printf("请输入字符:");
	fgets(str,100,stdin);
	type_num(str);
	return 0;
}
