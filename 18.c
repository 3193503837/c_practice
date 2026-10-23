#include <stdio.h>
int main()
{
	int num,ans,i;
	ans=888;
	for (i=1;i<=3;i++){
		printf("ÇëÊäÈëÃÜÂë(»¹Ê£%d´Î»ú»á):",4-i);
		scanf("%d",&num);
		if(num==ans){
			printf("ÃÜÂëÕıÈ·!»¶Ó­µÇÂ¼!");
			break;
		}else{
			printf("ÃÜÂë´íÎó!\n");
		}
	} 
	if (i>3){
		printf("ÕËºÅÒÑËø¶¨!");
	}
	return 0;
}
