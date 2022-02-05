#include <iostream>


	using namespace std;

	class A {

	public:
		void f() {
			cout << "A" << endl;
		}

	};

	class B : public A {
	public:
		void f() {
			::A::f();
                        cout << "B" << endl;
                }

	};

int main () {
	B b;
	b.f();

	A* a = &b;
	

	return 0;
}
