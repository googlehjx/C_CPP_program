#include <stdio.h>

// ��ʾ��������
void showBin(char ch) {
	int i = 8;
	while (i--) {
		if ((1 << i) & ch) {
			printf("1");
		}
		else {
			printf("0");
		}
		if (i % 4 == 0) {
			printf(" ");
		}
	}
	putchar(10);
}
int main(int argc, char* argv[]) {

#if 0
	int a = 'A'; // ��дA
	int b = 'a'; // Сдa
	printf("a = %u, A = %u\n", b, a);


	int data = 0x55;  // ��ʮ�����Ƹ�ֵ��data;
	// %#x ��ʮ��������ʾ����
	// %#o �԰˽�����ʾ����
	// %#d ��ʮ������ʾ���֣� ��#������ʡ��
	// %f  �Ը�������ʽ��ʾ����
	// %c  ���ַ���ʽ��ʾ����
	// %s  ���ַ�����ʽ��ʾ����

	const char* sName = "Jim Green";
	printf("data := %#x -- %#o -- %#d\n", data, data, data);
	printf("Name := %s\n", sName);

#endif

#if 0

	char ch = 97;
	char aCH;
	ch = getchar();
	getchar();
	putchar(ch);
	printf(" ascii: %d", ch);
	putchar(10);

	putchar(35);
	putchar(35);
	putchar(35);
	putchar(35);
	putchar(35);
	putchar(10);
	aCH = getchar();
	printf("aCH = %c\n", aCH);
#endif

	
	int in = 4;
	float ft = 3.4;
	in = ft;
	printf("in = %d, ft = %f\n", in, ft);


	return 0;
}