// Тривиальный пример на использование "::" -- обращения к классу или пространству имён
#include <iostream>
using namespace std;

class A {
	public: 
		void print(){cout<<"__A__";}
};

class B: public A {
	public:
	 void print(){cout<<"__B__";}
	 void printLn() {
		print();
		cout<<"\n";
		::A::print(); // Забыл показать на прошлом занятии, как явно вызвать метод, определённый в родительском классе. Показываю -- вдруг кто не знает :)
		cout<<"\n";
	}
};

int main() {
	B b;
	b.::A::print(); // Соответвенно снаружи, если он публичный
	return 0;
}
