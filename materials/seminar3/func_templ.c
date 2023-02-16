#include <iostream>

template<typename T, typename T2>
T2 f(T val) {
	return (T2)(val*val);
}

int main() {

	std::cout << f<float, int>(5.1) << " " << f<float, float>(5.1) << std::endl;
	return 0;
}
