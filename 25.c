#include <stdio.h>
int main()
{
	int arr[]={1,2,3,5,4};
	int *p=arr,*end=arr+4;
	int sum=0;
	for(;p<=end;p++){
		sum+=*p;
	}
	printf("%d",sum);
	return 0;
}
