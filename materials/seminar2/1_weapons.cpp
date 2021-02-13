#include <iostream>
using namespace std;

	
class Weapon {
public:
	virtual void attack() = 0;	

};

class Magazine {
	public:
	virtual void reload() = 0;
};

class Shotgun: public Weapon, public Magazine {
public:
	int num;
};

class AK: public Shotgun {
public:
	void attack() override {
		cout<<"Pew\n";
	}

	void reload() override {
		cout<< "reloaded" << endl;
	}
};

class MachineGun: public Weapon {
	void attack();
};

class Knife: public Weapon {
private:
	void hit() {
		cout << "Hit\n";
	}
public:
	void attack() override {
		this->hit();
	}

};


void action(Weapon& w) {
	w.attack();
}

void fillMagazine(Magazine& m) {
	m.reload();
}

int main() {
	Knife k;
	AK a;	
	action(a);
	fillMagazine(a);	
	return 0;
}
