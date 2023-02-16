#include <iostream>

template<typename T1, typename T2, typename T3>
struct A {
	void f() {
		std::cout << "Generic\n";
	}
};

template<typename T1, typename T3>
struct A<T1,int,T3> {
	void f() {
		std::cout << "Spec 1\n";
	}
};

template<typename T1>
struct A<T1,T1*,T1> {
	void f() {
		std::cout << "Spec 2\n";
	}
};

int main () {
	A<float,float,float> a;
	a.f();
	A<float, int, char> b;
	b.f();
	A<char, char*, char> c;
	c.f();
	return 0;
}
