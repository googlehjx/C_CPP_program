#include <stdio.h>

// Switch���ʽ���������λ��ַ���
// case ���ʽ�����ǳ������ʽ
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