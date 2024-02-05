#include <iostream>
//#include "c_stack.h"
#include "cpp_stack.h"

int main() {

	Stack st;
	st.init();
	st.push('a');
	st.push('b');
	st.push('c');
	st.push('d');
	st.push('a');
	st.push('b');
	st.push('c');
	st.push('d');
	st.push('a');
	//st.push('b');
	//st.push('c');
	//st.push('d');

	//while (!st.isEmpty())
	//{
	//	std::cout << st.pop() << std::endl;
	//}

	return 0;
}