/* reinterpret_cast<...> -- небезопасное приведение типов.  Является функционально усеченным аналогом приведения типов в стиле языка С. Отличие состоит в том, что reinterpret_cast не может снимать квалификаторы const и volatile, а также не может делать небезопасное приведение типов не через указатели, а напрямую по значению. Например, переменную типа int к переменной типа double привести при помощи reinterpret_cast нельзя.
Подробнее: https://habr.com/ru/post/266747/?
*/
#include <iostream>

using namespace std;

int main()
{
    uint64_t val;
    const uint64_t *valptr;
    
    const int * intval;
    
    intval = reinterpret_cast<const int*>(valptr);
    cout<<"Hello World";

    return 0;
}
