#include <iostream>

struct Base {
	virtual void f() = 0;
};

struct Derived_1: Base {
	virtual void f() {std::cout << "Derived_1\n";};
};

struct Derived_2: Base {
	virtual void f() {std::cout << "Derived_2\n";};
};

struct Base_2 {
	virtual void f() {
		std::cout << "Base_2" << std::endl;
	};
};
////////////////////////////////////////////////////////////////////////////////////
struct SuperDerived: Derived_1, Derived_2, Base_2 {
	virtual void f() override {
		std::cout << "SD\n";
	};
};

int main() {
	//Base_2 *b2 = new SuperDerived;
	//b2->f();
	//SuperDerived obj1;
	//obj1.f();
	//Base_2 bbb;
	//SuperDerived* pSD = dynamic_cast<SuperDerived*>(b2);
	//pSD -> f();
	SuperDerived pObj ;//= new SuperDerived;
	pObj.::Derived_1::f();
	Derived_1 *pD1 = dynamic_cast<Derived_1*>(&pObj);
	//pD1 -> f();
	Derived_1 *D11 = new SuperDerived;
	Derived_2 *D22 = dynamic_cast<Derived_2*>(D11);
	D11->f();
	D22->f();
	return 0;
}
