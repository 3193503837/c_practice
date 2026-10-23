#include <stdio.h>
int main()
{
	int n;
	printf("采样点数：");
	scanf("%d",&n);
	int count=0,high_count=0,found_pos=0,found=0;
	int i;
	for ( i=1;i<=n;i++){ 
		int x;
		scanf("%d",&x);
		if(x==1){
			high_count++;
		}
		if(x==1){
			count++;
		}else if(x==0){
			count=0;
		}
		if(found==0&&count==3){
			found=1;
			found_pos=i;
		}
	}
	if (found==1){
		printf("首次确认按下:第%d个采样点\n",found_pos);
	} else if(found==0){
		printf("未确认按下\n");
	}
	printf("高电采样点个数=%d\n",high_count);
	return 0;
}
