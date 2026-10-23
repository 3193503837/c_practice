#include <stdio.h>
#include <string.h> 
int main(){
	char *name[5]={"Tom","Jason","Amy","Elice","Lily"};
	int i;
	for (i=0;i<5;i++){
		int j;
		for (j=0;j<5-i-1;j++){
			if(strcmp(name[j],name[j+1])>0){
				char*temp=name[j];
				name[j]=name[j+1];
				name[j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%s ",name[i]);
	}
	return 0;
} 
