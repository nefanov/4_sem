#include <iostream>

using namespace std;

class Component {
public:
	Component() {
		cout << "component\n";
	}
};

class GPU : public virtual Component {
public:
	GPU() {
		cout << "GPU\n"; 
	}
	void f() {
		cout << "GPU\n" <<endl;
	}
};

class Mem : public virtual Component {
public:
	Mem () {
		cout << "Mem\n";
	}
	void f() {
		cout << "Comp\n";
	}

};

class VideoCard: public GPU, public Mem  {
public:
	VideoCard() {
		cout<< "Videocard\n";
	}

};


int main() {
	VideoCard vc;
	cout<< "Type:" << typeid(vc).name() <<endl;
	cout<< "Type:" << typeid(static_cast<Mem>(vc)).name() << endl;
	(static_cast<Mem>(vc)).f();
	return 0;
}
