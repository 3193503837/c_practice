#include <stdio.h>
int main()
{
	int m;
	printf("ÊäÈëÔÂ·İ£º");
	scanf("%d",&m);
	switch (m){
		case 3:
		case 4:
		case 5:
			printf("´º¼¾");
			break;
		case 6:
		case 7:
		case 8:
			printf("ÏÄ¼¾");
			break;
		case 9:
		case 10:
		case 11:
			printf("Çï¼¾");
			break;
		case 12:
		case 1:
		case 2:
			printf("¶¬¼¾");
			break;
	}
	return 0;
 } 
 
