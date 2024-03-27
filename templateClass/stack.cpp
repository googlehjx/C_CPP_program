#include "stack.h"
#include "student.h"
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
template<typename T>
myStack<T>::myStack(const myStack<T>& ts) {
	num = ts.num;
	for (int i = 0; i < num; i++) {
		data[i] = ts.data[i];
	}
}

// �������ģ�������Ͷ���ֿ����Ǳ�����ʵ�ֵĵط���ʽʵ����
// ��ʽʵ��������ȷ��֪������������ģ��myStack����������ʵ��: myStack<int��,myStack<double>
template class myStack<int> ;  
template class myStack<double>;
template class myStack<myStudent>;