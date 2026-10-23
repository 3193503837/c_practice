#include <stdio.h>
#include <stddef.h>
#include <string.h>
struct Motor{
		char code[16];
		char modle[32];
		int idle_ma;
		int stall_ma;
		int rpm;
		double score;
	};
void judge(struct Motor *p){
	p-> score=(double)p->rpm/p->idle_ma;//相当于(*p).score=.... 
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	struct Motor motors[10];
	for(i=0;i<n;i++){
		printf("第%d发动机:\n",i+1);
		scanf("%s",motors[i].code);
		scanf("%s",motors[i].modle);
		scanf("%d",&motors[i].idle_ma);
		scanf("%d",&motors[i].stall_ma);
		scanf("%d",&motors[i].rpm);
		judge(&motors[i]);
	}
	printf("结构体总大小=%d\n",sizeof(struct Motor));
	int add=16+32+4+4+4+8;
	int empty=sizeof(struct Motor)-add;
	printf("成员合计=%d,填充字节=%d\n",add,empty);
	printf("code 偏移 %d，占 %d 字节\n",(int)offsetof(struct Motor, code),16);//stddef工具箱 
	printf("modle 偏移 %d，占 %d 字节\n",(int)offsetof(struct Motor, modle),32);
	printf("idle_ma 偏移 %d，占 %d 字节\n",(int)offsetof(struct Motor, idle_ma),4);
	printf("stall_ma 偏移 %d，占 %d 字节\n",(int)offsetof(struct Motor, stall_ma),4);
	printf("rpm 偏移 %d，占 %d 字节\n",(int)offsetof(struct Motor, rpm),4);
	printf("score 偏移 %d，占 %d 字节\n",(int)offsetof(struct Motor, score),8);
	int j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(motors[j].score<motors[j+1].score){
				struct Motor temp;
				temp=motors[j];
				motors[j]=motors[j+1];
				motors[j+1]=temp;//冒泡排序 
			}else if(motors[j].score==motors[j+1].score){
				if(strcmp(motors[j].code,motors[j+1].code)>0){//string工具箱 
					struct Motor temp;
				temp=motors[j];
				motors[j]=motors[j+1];
				motors[j+1]=temp;
				}
			}
		}
	}
	printf("编号\t型号\t评分\t\n");
	for(i=0;i<n;i++){
		printf("%s\t%s\t%.2f\t\n",motors[i].code,motors[i].modle,motors[i].score);
	}
	return 0;
}
