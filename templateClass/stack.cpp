#include "stack.h"

template<typename T>
bool myStack<T>::Push(T& t) {
	if (!isFull()) {
		data[num] = t;
		num++;
		return true;
	}
	else {
		return false;
	}
}
template<typename T>
bool myStack<T>::Pop(T& t) {
	if (!isEmpty()) {
		num--;
		t = data[num];
		return true;
	}
	else {
		return false;
	}
}
template<typename T>
void myStack<T>::show()const {
	if (!isEmpty()) {
		for (int i = 0; i < num; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "The Stack is empty." << endl;
	}

}

// 显示实例化，明确告知编译器，由类模板myStack，生成两个实例: myStack<int和,myStack<double>
//template class myStack<int> ;  
//template class myStack<double>;