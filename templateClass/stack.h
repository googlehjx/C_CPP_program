#pragma once
#include <iostream>
using std::cout;
using std::endl;
template<typename T>
class myStack {

public:
	myStack() { num = 0; };
	myStack(const myStack<T>& ts);
	bool isEmpty()const { return num == 0; }
	bool isFull()const { return num == MaxLen; }
	bool Push(T& t);
	bool Pop(T& t);
	void show()const;
private:
	enum{MaxLen = 10};
	int num;
	T data[MaxLen];
};

//template<typename T>
//bool myStack<T>::Push(T& t) {
//	if (!isFull()) {
//		data[num] = t;
//		num++;
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//template<typename T>
//bool myStack<T>::Pop(T& t) {
//	if (!isEmpty()) {
//		num--;
//		t = data[num];
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//template<typename T>
//void myStack<T>::show()const {
//	if (!isEmpty()) {
//		for (int i = 0; i < num; i++) {
//			cout << data[i] << " ";
//		}
//		cout << endl;
//	}
//	else {
//		cout << "The Stack is empty." << endl;
//	}
//	
//}