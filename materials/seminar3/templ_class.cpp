#include <iostream>
#include <typeinfo>

template <typename X, typename Y>
class Point {
	private:
		X x;
		Y y;
	public:
		void dump() {
			std::cout << "This is object created from template parameterized from " << typeid(x).name() << " " << typeid(y).name() << std::endl;
		}
};

template <>
class Point <double, int> {
	private:
		double x;
		int y;
	public:
		void dump() {
			std::cout << "This is object created from specialized template parameterized from " << typeid(x).name() << " " << typeid(y).name() << std::endl;
		}
};

int main() {
	Point<int,int> p;
	Point<double,double> pd;
	Point<double, int> pspec;
	p.dump();
	pd.dump();
	pspec.dump();
	std::cout << typeid(p).name() << ","<< typeid(pd).name() << std::endl;
	return 0;
}
