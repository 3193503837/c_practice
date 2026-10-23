#include <stdio.h>
//第一部分 
unsigned int set(unsigned int star,int n){
	return star|(1<<n);
}
unsigned int clear(unsigned int star,int n){
	return star&~(1<<n);
}
unsigned int turn(unsigned int star,int n){
	return star^(1<<n);
}
unsigned int read(unsigned int star,int n){
	return (star>>n)&1;
}
int print_count(unsigned int star){
	int i,count=0;
	for(i=31;i>=0;i--){
		int x=(star>>i)&1;
		printf("%d",x);
		if(x==1){
			count++;
		}
		if((i)%8==0){
			printf(" ");
		}
	}
	return count;
}
//第二部分
unsigned int pack(unsigned int speed,unsigned int enable,unsigned char*bit1,unsigned char*bit2){
 	unsigned int pack;
 	unsigned char bit3;
 	pack=speed|(enable<<15);
 	*bit1=pack>>8,*bit2=pack,bit3=(*bit1+*bit2)&0xFF; 
 	return bit3;
 }
 void unpack(unsigned int*speed,unsigned int*enable,unsigned char bit1,unsigned char bit2){
 	unsigned int bit=(bit1<<8)|bit2;
 	*speed=bit&0x7FFF,*enable=(bit>>15)&1;
 	printf("速度为%u，使能=%u",*speed,*enable);
 }
 int main()
 {
 	unsigned int star;
 	int n;
 	printf("寄存器初值:");
 	scanf("%u",&star);
 	printf("二进制：");
 	int count=print_count(star);
 	printf("\n");
 	printf("1的个数:%d\n",count);
 	printf("寄存器值:");
 	scanf("%u",&star);
 	printf("位号:");
 	scanf("%d",&n);
 	unsigned int reg = star;
    reg=set(reg,n);
	printf("置位后：%d\n",reg);
    reg=clear(reg,n);
	printf("清零后：%d\n",reg);
    reg=turn(reg,n);
	printf("翻转后：%d\n",reg);
	int d=read(reg,n);
	printf("第%d位：%d\n",n,d);
 	unsigned int speed,enable;
 	unsigned char bit1,bit2;
 	printf("速度："); 
 	scanf("%u",&speed);
 	printf("使能：");
 	scanf("%u",&enable);
 	unsigned int check=pack(speed,enable,&bit1,&bit2);
 	printf("打包：%02X %02X %02X\n",bit1,bit2,check);
 	unpack(&speed,&enable,bit1,bit2);
 	return 0;
 }
