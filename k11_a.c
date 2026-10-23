#include <stdio.h>
#include <string.h>
//函数 
void pwm(const char *arg){
	printf("PWM设为%s\n",arg);
}
void led(const char *arg){
	if(arg!=NULL&&strcmp(arg,"ON")==0){//防止strcmp访问地址0报错 
		printf("LED已点亮\n");
	}else if(arg!=NULL&&strcmp(arg,"OFF")==0){
		printf("LED已熄灭\n");
	}else{
		printf("LED参数错误!\n");
	} 
}
void status(const char *arg){
	printf("系统正常\n");
}
void beep(const char*arg){
	printf("蜂鸣器响\n");
}
//函数名清单（本质是结构体） 
typedef struct{
	const char*name;
	void (*f)(const char*arg);
}Command;
Command tables[]={
	{"PWM",pwm},
	{"LED",led},
	{"STATUS",status},
	{"BEEP",beep}
};
int main(){
	char a[100];
	int i,size=sizeof(tables)/sizeof(tables[0]);
	while(fgets(a,sizeof(a),stdin)!=NULL){//输入并防止输入值溢出 
		a[strcspn(a,"\n")]='\0';
		char *cmd=strtok(a," ");
		char *arg=strtok(NULL," ");
		if(cmd==NULL){
			continue;//防止下面的strcmp访问地址0 
		}
		int found=0;
		for(i=0;i<size;i++){
			if (strcmp(cmd,tables[i].name)==0){
				tables[i].f(arg);
				found++;
				break;
			}
		}
		if (found==0){
			printf("ERROR:未知命令\n");
		}
	}
	return 0;
}
