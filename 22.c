#include <stdio.h>
int main()
{
	int arr1[3][4]={
		{3,2,5,6},
		{2,6,6,7},
		{9,5,2,8}
	};
	int i,j,arr2[10];
	for(i=0;i<3;i++){
		arr2[i]=0;
		for(j=0;j<4;j++){
			if (arr1[i][j]>arr2[i]){
				arr2[i]=arr1[i][j];
			}
		}
	}
	for(i=0;i<3;i++){
		printf("第%d行最大值是%d\n",i+1,arr2[i]);
	}
	return 0;
}
