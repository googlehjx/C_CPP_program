#pragma once

// C���Բ�֧�ֺ�������



typedef struct _my_complex {
	float real;
	float imaging;
}myComplex;


void func(int a);
void func(char a);

myComplex operator+(myComplex a, myComplex b);
