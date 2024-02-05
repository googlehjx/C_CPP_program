#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	char* p = (char*)malloc(10 *  sizeof(char));
	strcpy(p, "123456789");
	printf("hello, I'm sucessful.\n");
	for (int i = 0; i < 10; i++) {
		printf("%c ", *(p + i));
	}
	putchar(10);
	free(p);



}