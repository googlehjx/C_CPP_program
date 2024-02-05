#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct PointerData {
	char* pChar;
	int number;
}pData;


int main() {

	pData * pd  = (pData*)malloc(sizeof(PointerData));
	if (pd != NULL) {
		pd->pChar = (char*)malloc(sizeof(char));
		if (pd->pChar != NULL) {
			memset(pd->pChar, 'A', 1);
		}		
		pd->number = 200;
		printf("The char = %c The number = %d\n", *(pd->pChar), pd->number);
	}	
	
	free(pd->pChar);
	free(pd);
}

typedef struct _birth {
	int year;
	int month;
	int day;
}Birth;

typedef struct _stu {
	int id;
	char name[30];
	float score;
	Birth bt;
}Stu;

typedef struct test {
	char a;
	int b;
	short c;
}Test;
int main1() {

	//Stu s1{ 1, "Jim Green", 90.0 , {1985, 11, 11} };
	//Stu s2{ 2, "Hedy He", 99.0, {1989, 5, 12 }};
	//Stu students[2] = { s1, s2 };
	//for (int i = 0; i < 2; i++) {
	//	printf("ID: %d, Name: %10s, Score: %4.2f, BirthDay: %4d %2d %2d", students[i].id, students[i].name, students[i].score, students[i].bt.year, students[i].bt.month, students[i].bt.day );
	//	putchar(10);
	//}

	printf("The size of sizeof(Test): %d", sizeof(Test));
	return 0;
}