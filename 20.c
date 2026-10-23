#include <stdio.h>
int main()
{
	int scores[5]={10,20,30,40,50};
	int i;
	for (i=0;i<5/2;i++){
		int j;
		j=scores[4-i];
		scores[4-i]=scores[i]; 
		scores[i]=j;
	}
	for (i=0;i<5;i++){
		printf("%d ",scores[i]);
	}
	return 0;
 } 
