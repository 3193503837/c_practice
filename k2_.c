#include <stdio.h>
//限幅 
int clamp(int x, int min, int max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}
//死区 
int apply_deadzone(int x,int deadzone){
	if (x>-deadzone&&x<deadzone){
		return 0;
	}return x;
}
// 欠压保护 
int under_voltage_protect(int x,float voltage,float protect){
	if (voltage<protect){
		printf("状态：欠压，已停机\n");
		printf("实际占空比：0\n",x);
		return 0;
	}printf("状态：正常\n");
	printf("实际占空比:%d",x);
	return x;
}
//调用函数 
int main()
{
	int input;
	float voltage;
	scanf("%d %f",&input,&voltage);
	
	int x=input;
	
	x=clamp(x,-1000,1000);
	x=apply_deadzone(x,100);
	x=under_voltage_protect(x,voltage,3.0);
	
}
