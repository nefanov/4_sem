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
};

class Mem : public virtual Component {
public:
	Mem () {
		cout << "Mem\n";
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

	return 0;
}
