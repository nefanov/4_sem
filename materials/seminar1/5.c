#include <iostream>

class Weapon {
	public:
		virtual void attack() = 0;
};

class Ammo {
	public:
		unsigned ammo;
	Ammo(unsigned num) {
		ammo = num;
	}
};

class Shotgun: public Ammo, public Weapon {
	public:
		void attack() override {
			std::cout << "PewPew\n";
		}
		Shotgun(unsigned num): Ammo(num){}
		~Shotgun(){};
};

class Knife: public Weapon {
	public:
		void attack() override {
					std::cout << "ChickChick\n";}

};

void action(Weapon& w) {
	w.attack();
}

int main() {
	Shotgun *G = new Shotgun(10);
	Knife K;
	//G.ammo = 2;
	action(*G);
	action(K);
	delete G;
	return 0;
}
