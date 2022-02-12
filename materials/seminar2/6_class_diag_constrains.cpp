#include <iostream>

using namespace std;

class D {
private:
	int field1;
	int field2;
public:
	D(int field1,int field2) {
		this -> field1 = field1;
		this -> field2 = field2;
	}
	int getField1() {
		return this->field1;
        }

        int getField2() {
		return this->field2;
        }

	void setField1(int val) {
                field1 = val;
        }

        void setField2(int val) {
                field2 = val;
        }
};

class B : virtual public D {
public:
	B(int field1, int field2) : D(field1, field2) {
		
	}

	void print() {
		cout << getField1() << " " <<  getField2() << endl;
	}

	void set(int f1, int f2) {
                setField1(f1);
		setField2(f2);
        }

};

class A : virtual public B, virtual public D {
public:
	A(int field1, int field2) : B(field1, field2),  D(field1, field2) {
                
	}

	void __print() {
		cout << getField1() << " " <<  getField2() << endl;
	}

        void __set(int f1, int f2) {
                setField1(f1);  
                setField2(f2);
        }

};

int main() {
	A* a = new A(5,6);
	B* b = static_cast<B*>(a);
        (*b).print();
	(*a).__set(5,7);
	b = static_cast<B*>(a);
	(*b).print();
	
	return 0;

}
