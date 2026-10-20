#include <stdio.h>

int main(void) {
	int x = 25, y;
	printf("猜数字游戏！目标是1——100哦\n");
	printf("输入数字吧！\n");
	while (1) {
		scanf("%d", &y);
		if (y == x) {
			printf("祝你生日快乐，王！！!\n");
			break;
		} else if (y > x) {
			printf("大了哦\n");
		} else {
			printf("小了哦\n");
		}
	}
	return 0;
}