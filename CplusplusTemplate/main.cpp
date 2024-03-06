#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
const int COUNT = 3;
typedef struct DataNode {
	std::string name;
	int score;
}Node;
template<typename T>
void Swap(T& t1, T& t2) {   // normal template function
	cout << " From template<typename T> void Swap(T&, T&) " << endl;
	T tmp;
	tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template<> void Swap<Node>(Node& n1, Node& n2) {   // explicite specalization

	
	cout << " From template<> void Swap<Node>(Node&, Node&) " << endl;
	string tmp_name;
	int tmp_score;
	tmp_name = n1.name;
	n1.name = n2.name;
	n2.name = tmp_name;
	tmp_score = n1.score;
	n1.score = n2.score;
	n2.score = tmp_score;
}
template<typename T>
void Swap(T* pT1, T* pT2) {     // ÷ÿ‘ÿµƒƒ£∞Â
	std::cout << " From Swamp(T*, T*) " << std::endl;
	T tmp;
	for (int i = 0; i < COUNT; i++) {
		tmp = pT1[i];
		pT1[i] = pT2[i];
		pT2[i] = tmp;
	}
}
template<typename T>
void show(T* data, int num) {
	for (int i = 0; i < num; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}
int main() {
	cout << "======================================" << endl;
	int a = 3, b = 4;
	cout << " a , b = " << a << ", " << b << endl;
	Swap(a, b);
	cout << " a , b = " << a << ", " << b << endl;
	cout << "======================================" << endl;
	double c = 3.14, d = 2.17;
	cout << " c , d = " << c << ", " << d << endl;
	Swap(c, d);
	cout << " c , d = " << c << ", " << d << endl;
	cout << "======================================" << endl;
	Node e = { "bob", 90 }, f = { "jack", 89 };

	cout << " e , f = " << e.name << ", " << f.name << endl;
	cout << " e , f = " << e.score << ", " << f.score << endl;
	Swap(e, f);
	cout << " e , f = " << e.name << ", " << f.name << endl;
	cout << " e , f = " << e.score << ", " << f.score << endl;
	cout << "======================================" << endl;
	int i_arr[] = { 1, 2, 3 };
	int j_arr[] = { 4, 5, 6 };
	show(i_arr, COUNT);
	show(j_arr, COUNT);
	Swap(i_arr, j_arr);
	show(i_arr, COUNT);
	show(j_arr, COUNT);
	cout << "======================================" << endl;
	return 0;
}
