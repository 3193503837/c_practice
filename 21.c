#include <stdio.h>
int main()
{
	int arr[3][3]={
	{1,3,4},
	{2,4,6},
	{2,5,8}};
	int i,j,max=0,max_x,max_y;
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
				max_x=i+1;
				max_y=j+1;
			}
		}
	}
	printf("最大值为%d",max);
	printf("位置在第%d行第%d列",max_x,max_y);
	return 0;
}
