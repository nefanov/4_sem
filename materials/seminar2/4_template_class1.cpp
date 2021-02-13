#include <iostream>
#include <vector>

using namespace std;

template <class T, class T2> 
class F {
public:
	T t;
	T2 tt;
};


int main() {
	F<int, int> tInt;
	F<double, int> tDouble;
	F<F<double, int>, int > tF;	
	vector<double> V(5);
	V.push_back(100.1);
	
	for (auto it=V.begin(); it != V.end(); ++it) {
		cout << *it <<endl;
	}

	cout << V[V.size()-1] << endl;

	cout << typeid(tInt.t).name()<<" "<<typeid(tDouble.t).name()<<" " <<typeid(tF.tt).name()<<endl;
	return 0;
}
