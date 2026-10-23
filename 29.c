#include <stdio.h>
void type_num(char *str){
	int num1=0,num2=0,num3=0;
	for(;*str!='\0';str++){
		int size=sizeof(*str);
		if(size==1){
			num1++;
		}else if(size==4){
			num2++;
		}else{
			num3++;
		}
	}
	printf("字母有%d个，数字有%d个，其他字符有%d个",num1,num2,num3); 
}
int main(){
	int str[100];
	printf("请输入字符:");
	scanf("%s",str);
	type_num(str);
	return 0;
}
