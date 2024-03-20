#include <iostream>
using namespace std;
class B {
public:
    B() { cout << "默认构造函数" << endl; }
    B(const B& b) { 
        cout << "拷贝构造函数，参数：" << b.data << endl;
        data = b.data; }
    ~B() { cout << "对象销毁" << endl; }
    B(int i) :data(i)    // B(int) works as a converter ( int ->instance of  B)
    {
          cout << "带参构造函数，参数 " << data << endl;
    }
private:int data;
};

B Play( B b) {return b ;}                         

int main(int argc, char* argv[]) {
    B t1 = Play(5);  // 5 -> B对象  -> 临时对象： 临时对象销毁
    B t2 = Play(t1); // t1 -> 临时对象 临时对象销毁 
    return 0;
}

/*
constructed by parameter 5
constructed by parameter 5
destructed
constructed by parameter 5
constructed by parameter 5
destructed
destructed
destructed

*/