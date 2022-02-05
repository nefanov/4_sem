//#include <iostream>

int f(int a) {
//	std::cout << a <<std::endl;
	return a;
}

int f() {
//	std::cout << 2 <<std::endl;
	return 2;
}


int main() {
	f();
	f(5);
}
