#include <iostream>

class A {
	public:
		int x;
		
	protected:
		int y;

	private:
		int z;
};

class B : public A {
	// x -- public
	// y -- protected
	// z -- not accessible
	public:
		void f() {
			(*this).y = 1;
			::A::y = 1;		

		}
};

class C : protected A {
	// x -- protected
        // y -- protected
        // z -- not accessible
	void f() {
                        (*this).y = 1;
                        ::A::y = 1;

                }
};

class D : private A {
	// x -- private
        // y -- private
        // z -- not accessible

	void f() {
                        (*this).y = 1;
                        ::A::y = 1;

                }
};

/*
 new_mod = min( self modifier, inheritance modifier)
*/

int main() {
	A a;
	B b;
	C c;
	D d;
/*
	a.x;
	a.y;
	b.x;
	b.y;
	c.x;
	c.y;
*/	
	return 0;
}
