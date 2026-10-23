#include <stdio.h>
int main()
{
	int n,i,j;
	printf("ÇëÊäÈëÕûÊı£º");
	scanf("%d",&n);
	for (i=2;i<=n;i++){
		for (j=2;j<i&&i%j!=0;j++);
		if(j==i){
			printf("%d",i);
		}
    }
	return 0;
}
