#include <iostream>

class A {
	public:
		int x = 1;
		
	protected:
		int y = 2;

	private:
		int z = 3;

public:
	int getZ() {
	    return this -> z;
	}

};

class B: public A {};
class C: protected A {};
class D: private A {};

int main() {
    D b; // test with B, C, modify to get all of properties x,y,z
    b.x;
    b.y;
    b.getZ();
    return 0;
};
