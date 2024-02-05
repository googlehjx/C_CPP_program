#include <stdio.h>

#define F_PRINT_LOG(e)\
do\
{\
	printf("Message: %s\n", e);\
}\
while(0)

int main() {
	FILE* fp;
	fopen_s(&fp, "ascii.bin", "w+");
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++) {
		putchar(fputc(ch, fp));
	}
	rewind(fp);
	printf("\n\n--------·Ö¸îÏß---------\n");
	
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}
	putchar(0x0a);
	fclose(fp);

	FILE* fpScr;
	fopen_s(&fpScr, "newfile.txt", "w+");
	char buf[1024] = { "123456789\nabcdef"};
	fputs(buf, fpScr);
	rewind(fpScr);

	char buf_new[1024] = { 0 };
	fgets(buf_new, 10, fpScr);
	for (int i = 0; i < 10; i++) {
		printf("%x ", buf_new[i]);
	}
	putchar(10);

	fgets(buf_new, 10, fpScr);
	for (int i = 0; i < 10; i++) {
		printf("%x ", buf_new[i]);
	}

	fclose(fpScr);
}