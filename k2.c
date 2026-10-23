#include <stdio.h>
int clamp(int x, int min, int max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}
int apply_deadzone(int x,int deadzone){
	if (x>-deadzone&&x<deadzone){
		return 0;
	}return x;
}
int under_voltage_protect(int x,float voltage,float protect){
	if (voltage<protect){
		return 0;
	}return x;
}
int main()
{
	int input;
	float voltage;
	scanf("%d %f",&input,&voltage);
	
	int x=input;
	
	x=clamp(x,-1000,1000);
	x=apply_deadzone(x,100);
	x=under_voltage_protect(x,voltage,3.0);
	printf("ÊäÈë£º%d %.1f",input,voltage);
	printf("Êä³ö:%d",x);
};
