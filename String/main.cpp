#include <stdio.h>


int myStrLen(char* p);
char* myStrCat(char* p, char* q);
char* myStrCpy(char* p, char* q);
int myStrCmp(char* p, char* q);
int main() {
	char* p = (char*)"china";
	char pa[100] = "china";
	int L = myStrLen(pa);
	//printf("The string        = %s\n", pa);
	printf("The len of str    = %d\n", myStrLen(p));
	printf("The sizeof\(str\)   = %d\n", sizeof(p));
	myStrCat(pa, p);
	printf("The concatenate string = %s\n", pa);
	myStrCpy(pa, p);
	printf("The copy string = %s\n", pa);
	int res = myStrCmp(pa, p);
	if (res == 0) {
		printf("%s == %s\n", pa, p);
	}
}

int myStrLen(char* p) {
	int Len = 0;
	while (*p != '\0') {
		Len++;
		p++;
	}
	return Len;
}

char* myStrCat(char* p, char* q) {
	//int Lp = myStrLen(p);
	//int Lq = myStrLen(q);
	//int Len = Lp + Lq + 1;
	//for (; Lp < Len; Lp++) {
	//	*(p+Lp) = *q;
	//	q++;
	//}
	char* d = p;
	while (*p) p++;
	while (*p++ = *q++);
	return d;
}

char* myStrCpy(char* p, char* q) {
	char* d = p;
	while (*p++ = *q++);
	return d;
}

int myStrCmp(char* p, char* q) {
	while (*p++ == *q++);
	p -= 2;
	q -= 2;
	if ((*p == '\0') && (*q == '\0')) {
		return 0;
	}
	else
		return -1;
}

// src="blob:https://www.xnxx.com/8a2a9d6d-1334-4d3b-a50e-50e000ce8a9a"