#include <iostream>

using namespace std;


template<typename T, typename T2>
T2 f(T a) {
	return a*a;
}

int main() {
	//cout << f<int>(5.1) << endl;
	cout << f<float, int>(5.1) << endl;
	return 0;
}
