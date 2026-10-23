#include <stdio.h>

int main()
{
   int n;
   printf("请输入数字(0-6):");
   scanf("%d",&n);
   switch (n){
   	case 1:
	   printf("星期一");
	   break;
   	case 2:
	   printf("星期二");
   	   break;
   	case 3:
	   printf("星期三");
   	   break;
   	case 4:
	   printf("星期四");
	   break;
   	case 5:
	   printf("星期五");
	   break;
   	case 6:
	   printf("星期六");
	   break;
   	case 0:
	   printf("星期日");
	   break;
   	default:
   		break;
   }
   
   return 0;
}
