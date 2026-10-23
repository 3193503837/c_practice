#include <stdio.h>
#include <string.h>

struct Link{
	char name[20];
	char phone[20];
};

/* 读一整行再解析：把回车也一起吃掉，缓冲区不会残留；
 * 输入非法时可以重输；输入结束（EOF）时返回 -1 */
int read_int(const char *prompt)
{
	char buf[64];
	int x;

	printf("%s", prompt);
	while (1) {
		if (fgets(buf, sizeof(buf), stdin) == NULL)
			return -1;
		if (sscanf(buf, "%d", &x) == 1)
			return x;
		printf("输入无效，请重新输入：");
	}
}

/* 读一行字符串并去掉行尾的 \r\n；返回 0 表示输入结束 */
int read_str(const char *prompt, char *dst, int size)
{
	printf("%s", prompt);
	if (fgets(dst, size, stdin) == NULL)
		return 0;
	dst[strcspn(dst, "\r\n")] = '\0';
	return 1;
}

int search(struct Link *p, int count, char *_name)
{
	int i;
	for (i = 0; i < count; i++) {
		if (strcmp(_name, p[i].name) == 0) {
			printf("%d.%s %s\n", i + 1, p[i].name, p[i].phone);
			return 0;
		}
	}
	printf("未找到\n");
	return 1;
}

void add(struct Link *p, int *p1)
{
	struct Link new;

	if (*p1 >= 10) {
		printf("联系人已达上限\n");
		return;
	}
	if (!read_str("姓名:", new.name, sizeof(new.name)))
		return;
	if (!read_str("号码:", new.phone, sizeof(new.phone)))
		return;
	if (new.name[0] == '\0') {
		printf("姓名不能为空\n");
		return;
	}
	if (search(p, *p1, new.name) == 1) {
		p[*p1] = new;
		printf("添加成功\n");
		(*p1)++;
	}
}

void show_all(struct Link *p, int count)
{
	int i;
	if (count == 0) {
		printf("通讯录中暂无联系人\n");
		return;
	}
	for (i = 0; i < count; i++)
		printf("%d.%s %s\n", i + 1, p[i].name, p[i].phone);
}

void delete(struct Link *p, int *p1)
{
	int n, i;

	if (*p1 == 0) {
		printf("通讯录中暂无联系人\n");
		return;
	}
	show_all(p, *p1);
	n = read_int("请输入要删除的编号:");
	if (n == -1)
		return;
	if (n <= 0 || n > *p1) {
		printf("该编号不存在（当前共%d个联系人）\n", *p1);
		return;
	}
	for (i = n - 1; i < *p1 - 1; i++)
		p[i] = p[i + 1];
	(*p1)--;
	printf("删除成功\n");
}

void revise(struct Link *p, int count)
{
	int n;
	struct Link new;

	if (count == 0) {
		printf("通讯录中暂无联系人\n");
		return;
	}
	show_all(p, count);
	n = read_int("请输入要修改的编号:");
	if (n == -1)
		return;
	if (n <= 0 || n > count) {
		printf("该编号不存在（当前共%d个联系人）\n", count);
		return;
	}
	if (!read_str("姓名:", new.name, sizeof(new.name)))
		return;
	if (!read_str("号码:", new.phone, sizeof(new.phone)))
		return;
	p[n - 1] = new;
	printf("修改成功\n");
}

int main()
{
	struct Link links[10];
	int count = 0;
	int *p1 = &count;
	int i;

	while (1) {
		printf("1.添加联系人 2.显示全部 3.查找联系人 4.删除联系人 5.修改电话 0.退出\n");
		i = read_int("请选择:");
		if (i == -1) {
			printf("再见\n");
			break;
		}
		if (i == 1) {
			add(links, p1);
		} else if (i == 2) {
			show_all(links, count);
		} else if (i == 3) {
			char _name[20];
			if (!read_str("请输入要查找的人:", _name, sizeof(_name))) {
				printf("再见\n");
				break;
			}
			search(links, count, _name);
		} else if (i == 4) {
			delete(links, p1);
		} else if (i == 5) {
			revise(links, count);
		} else if (i == 0) {
			printf("再见\n");
			break;
		} else {
			printf("输入无效\n");
		}
	}
	return 0;
}
