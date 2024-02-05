#pragma once

// C语言不支持函数重载



typedef struct _my_complex {
	float real;
	float imaging;
}myComplex;


void func(int a);
void func(char a);

myComplex operator+(myComplex a, myComplex b);
