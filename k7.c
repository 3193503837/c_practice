#include <stdio.h>
void sort1(int a,int b){
	int t;
	t=a,a=b,b=t;
}
void sort2(int *a,int *b){
	int t;
	t=*a,*a=*b,*b=t;
}
void sort3(int *a,int *b,int *c){
	if (*a>*b){
    	sort2(a,b);
	}
	if (*a>*c){
		sort2(a,c);
	}
	if (*b>*c){
		sort2(b,c);
    }
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	sort1(a,b);
	printf("值交换后a=%d,b=%d\n",a,b);
	sort2(&a,&b);
	printf("指针交换后a=%d,b=%d\n",a,b);
	sort3(&a,&b,&c);
	printf("排序后a=%d,b=%d,c=%d\n",a,b,c);
	return 0;
}
