// первичный класс

#include <iostream>

template<class T1, class T2, int I>
class A {};             // основной шаблон
 
template<class T, int I>
class A<T, T*, I> {};   // # 1: частичная специализация, где T2 - указатель на T1
 
template<class T, class T2, int I>
class A<T*, T2, I> {};  // # 2: частичная специализация, где T1 - указатель
 
template<class T>
class A<int, T*, 5> {}; // #3: частичная специализация, где
                        // T1 — это int, I — это 5, а T2 — это указатель
 
template<class X, class T, int I>
class A<X, T*, I> {};   // # 4: частичная специализация, где T2 - указатель

int main() {return 0;}
