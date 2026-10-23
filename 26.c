#include <stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int *p=arr;
	int i;
	for (i=0;i<5/2;i++){
		int temp=*(p+i);
		*(p+i)=*(p+4-i);
		*(p+4-i)=temp;
	}
	for (i=0;i<5;i++){
		printf("%d ",*(p+i));
	}
	return 0; 
}
