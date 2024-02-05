#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// 宏定义
#define SQR(x) ((x)*(x))
// 内联函数定义
inline int mySqr(int a) {
	return a * a;
}

typedef struct _student {
	char name[30];
	float score;
}Stu;

int main() {

	int a = 4;
	cout << SQR(a) << endl;
	cout << mySqr(a) << endl;

	// static_cast
	// const_cast
	// dynamic_cast
	// reinterpret_cast

	float b = 4.5;
	a = static_cast<int>(b);
	cout << "After cast: a = " << a << endl;

	a = 5;

	b = static_cast<float>(a);
	cout << "After cast: b = " << b << endl;


#if 0

	// new 数组
	int* p_i = new int[5] {1, 2, 3};
	for (int i = 0; i < 5; i++) {
		cout << p_i[i] << " ";
	}
	cout << endl;


	// new二维数组, p2i是一个数组指针，
	int(*p2i)[4] = new int[3][4]{ {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << p2i[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "sizeof(p2i): " << **(p2i+1) << endl;

	const char* pc = "china";
	std::cout << *pc << endl;

	string* ps = new string{"china"};
	* ps = "I love";
	std::cout << *ps << endl;

	delete ps;


	int* pi = (int*)malloc(sizeof(int));
	if (pi != NULL) {
		*pi = 100;
		cout <<"The integer from malloc: " <<*pi << endl;
		free(pi);
	}

	int* pi2 = new int;
	*pi2 = 101;    
	cout << "The integer from new:    " << *pi2 << endl;
	delete pi2;
	return 0;

	int* pi = new int(5);

	int *parr = new int[10] ;
	for (int i = 0; i < 10; i++) {
		parr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << parr[i] << " ";
	}
	cout << endl;
	//cout << *pi << endl;
	Stu* ps = new Stu{ "china", 100 };
	cout << "name: " << ps->name << " " << "score: " << ps->score << endl;
	delete ps;
	
	delete pi;
	delete []parr;

#endif

	return 0;

}