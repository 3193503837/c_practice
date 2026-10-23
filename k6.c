#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int scores[n]; 
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&scores[i]);
	}
	int *p=scores;
	for(i=0;i<n;i++){
		printf("元素%d偏移%d字节,值=%d\n",i,(char*)(p+i)-(char*)p,*(p+i));
	}
	int sum=0;
	for(i=0;i<n;i++){
		sum+=scores[i];
	}
	printf("总和=%d",sum);
	printf("首末相隔%d字节",(n-1)*sizeof(int));
	return 0;
}
