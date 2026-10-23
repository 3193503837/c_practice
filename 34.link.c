#include <stdio.h>
#include <string.h>
struct Link{
	char name[20];
	char phone[20]; 
};
int search(struct Link *p,int count,char*_name){
	int i;
	for(i=0;i<count;i++){
		if(strcmp(_name,p[i].name)==0){
			printf("%d.%s %s\n",i+1,p[i].name,p[i].phone);
			return 0;
		}
	}
	printf("未找到\n");
	return 1;
}
void add(struct Link *p,int *p1){
	if(*p1>=10){
		printf("联系人已达上限");
		return;
	}
	struct Link new;
	printf("姓名:");
	scanf("%s",new.name);
	printf("号码:");
	scanf("%s",new.phone);
	if(search(p,*p1,new.name)==1){
		p[*p1]=new;
		printf("添加成功\n");
		(*p1)++;
		return;
	}
}
void show_all(struct Link *p,int count){
	if(count==0){
		printf("通讯录中暂无联系人\n");
		return;
	}
	int i;
	for(i=0;i<count;i++){
		printf("%d.%s %s\n",i+1,p[i].name,p[i].phone);
	}
}
void delete(struct Link *p,int*p1){
	if(*p1==0){
		printf("通讯录中暂无联系人\n");
		return;
	}else{
		show_all(p,*p1);
		int n,i;
		printf("请输入要删除的编号:");
		scanf("%d",&n);
		if(n<=0 || n>*p1){
			printf("该编号不存在\n");
			return;
		}else{
			for(i=n-1;i<*p1-1;i++){
				struct Link temp;
				p[i]=p[i+1];
			}
			printf("删除成功\n");
		}
	}
	(*p1)--;
}
void revise(struct Link *p,int count){
	if(count==0){
		printf("通讯录中暂无联系人\n");
		return;
	}else show_all(p,count);
	int n;
	printf("请输入要修改的编号:");
	scanf("%d",&n);
	if(n<=0 || n>count){
			printf("该编号不存在\n");
			return;
	}
	struct Link new;
	printf("姓名:");
	scanf("%s",new.name);
	printf("号码:");
	scanf("%s",new.phone);
	p[n-1]=new;
	printf("修改成功\n");
}

int main(){
	struct Link links[10];
	int count=0;
	int*p1=&count;
	while (1){
		int i;
		printf("1.添加联系人 2.显示全部 3.查找联系人 4.删除联系人 5.修改电话 0.退出\n");
		printf("请选择:");
		scanf("%d",&i);
		if (i==1) add(links,p1);
		else if (i==2) show_all(links,count);
		else if (i==3) {
			char _name[20];
			printf("请输入要查找的人:");
			scanf("%s",_name);
			search(links,count,_name);
		}
		else if (i==4) delete(links,p1);
		else if (i==5) revise(links,count);
		else if (i==0) {printf("再见\n");break;}
		else printf("输入无效\n"); 
		}
	return 0;
}
