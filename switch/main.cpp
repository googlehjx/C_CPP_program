#include <stdio.h>

// Switch表达式必须是整形或字符型
// case 表达式必须是常量表达式
int main() {
	int choice;
	printf("Input a Integer: ");
	scanf("%d", &choice);
	switch (choice) {
	case 1:
		printf("hello\n");
		break;
	case 2:
		printf("world\n");
		break;
	default:
		printf("hello world\n");

	}
}