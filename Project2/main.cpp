#include <stdio.h>

// 显示二进制数
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
	int a = 'A'; // 大写A
	int b = 'a'; // 小写a
	printf("a = %u, A = %u\n", b, a);


	int data = 0x55;  // 以十六进制赋值给data;
	// %#x 以十六进制显示数字
	// %#o 以八进制显示数字
	// %#d 以十进制显示数字， ‘#’可以省略
	// %f  以浮点数格式显示数字
	// %c  以字符格式显示变量
	// %s  以字符串方式显示变量

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