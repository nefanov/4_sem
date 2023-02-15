// full specialization

#include <iostream>
#include <typeinfo>

template <typename X, typename Y> 
class Point
{ /* ... реализация параметризованного класса Widget для любого вида окна Window и любого обработчика событий Controller */ 
    private:
        X x;
        Y y;
    public:
    void dump() {
        std::cout << "This is the object from generic template parametrized by" <<typeid(x).name() << " and " << typeid(y).name() <<  std::endl;
    }
}; 

// явная специализация первичного класса
template <>
class Point <double, int>
{ /* ... реализация класса Widget под работу с диалоговым окном DialogWindow и обработчиком событий диалогового окна DialogController */
    private:
        double x;
        int y;
    public:
    void dump() {
        std::cout << "This is the object from fully specialized template parametrized by " <<typeid(x).name() << " and " << typeid(y).name() << std::endl;
    }
};

int main() {
    Point<int,int> p;
    p.dump();
    Point<double, int> p2;
    p2.dump();
    return 0;
}
