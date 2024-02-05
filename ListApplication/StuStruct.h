#include <stdlib.h>

typedef struct _student {
	char name[30];
	char gender;
	float score;
}Stu;

typedef struct _StuNode {
	Stu data;
	struct _StuNode* next;
}StuNode;

void InitSut2File();
StuNode* creatStuListFromFile(const char* FilePath);
void printStuData(StuNode* head);
void findStuFromList(StuNode* head);
void addStu2Link(StuNode* head);
void sortStuLink(StuNode* head);
void deletStuLink(StuNode* head);
void saveStuLink(StuNode* head);
void freeStuLink(StuNode* head);
void reversStuLink(StuNode* head);
StuNode* rStuLink(StuNode* tmp);