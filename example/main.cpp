#include <iostream>
using namespace std;
class B {
public:
    B() { cout << "Ĭ�Ϲ��캯��" << endl; }
    B(const B& b) { 
        cout << "�������캯����������" << b.data << endl;
        data = b.data; }
    ~B() { cout << "��������" << endl; }
    B(int i) :data(i)    // B(int) works as a converter ( int ->instance of  B)
    {
          cout << "���ι��캯�������� " << data << endl;
    }
private:int data;
};

B Play( B b) {return b ;}                         

int main(int argc, char* argv[]) {
    B t1 = Play(5);  // 5 -> B����  -> ��ʱ���� ��ʱ��������
    B t2 = Play(t1); // t1 -> ��ʱ���� ��ʱ�������� 
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