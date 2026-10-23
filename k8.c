#include <stdio.h>
//复制 
void my_memcpy(void *two,const void *one,int n){
	char *o=(char*)one;
	char *t=(char*)two;
	int i;
	for(i=0;i<n;i++){
		t[i]=o[i];
	}
}
//清零 
void my_memset(void *two,int value,int n){
	char *t=(char*)two;
	int i;
	for(i=0;i<n;i++){
		t[i]=(char)value;
	}
}
//输出数组（懒得重复写） 
void shuchu(int m,int *one){
	int i;
	for(i=0;i<m;i++){
		printf("%d ",one[i]);
	}
	printf("\n");
}
int main()
{
	int m,one[10],i;
	//输入 
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&one[i]);
	}
	int n,two[10];
	n=m*sizeof(int);
	my_memcpy(two,one,n);
	printf("复制结果：");
	shuchu(m,two);
	printf("数组总字节数=%d,每个元素=%d字节\n",m*sizeof(int),sizeof(int));
	int *first=&one[0],*last=&one[m-1];
	printf("用指针相减算出的元素个数=%d\n",last-first+1);
	my_memset(two,0,n);
	printf("清0后：");
	shuchu(m,two);
}
