#include <iostream>
using namespace std;

class Weapon {
	public:
		virtual void attack() = 0;
};

class Magazine {
public:
	int num;
};

class Shotgun : public Weapon, public Magazine {
public:
	void attack() override {
		cout << "Pew\n";
	}
};

class Knife: public Weapon {
public:
	void attack() override {
		cout << "Hit\n";
	}

};

void action(Weapon& w) {
	w.attack();
}

int main() {
	Knife k;
	Shotgun s;
	s.num = 1;
	//.attack();
	action(k);
	action(s);
}
