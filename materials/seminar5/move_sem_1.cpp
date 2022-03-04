#include <iostream>

class String
{
public:
    explicit String(const char *const c_string)
    {
        std::cout << "String(const char *const c_string)\n";
        size = strlen(c_string) + 1;
        this->c_string = new char[size];
        strcpy(this->c_string, c_string);
    }
    
    String():c_string(new char[1]){
        c_string = 0;
    }

    String(const String& other)
    {
        std::cout << "String(const String& other)\n";
        c_string = new char[other.size];
        strcpy(c_string, other.c_string);
        size = other.size;
    }

    ~String() noexcept
    {
        std::cout << "~String()\n";
        delete[] c_string;
    }
// Новая сущность для нас -- конструктор перемещения    
    String(String &&other) noexcept
    {
        std::cout << "String(String&& other)\n";
        c_string = other.c_string;
        size = other.size;
        other.c_string = nullptr;
        other.size = 0;
    }

private:
    char *c_string;
    size_t size;
};

//void test_f(String s);


int main() {
  auto string = String("Hello, C++11");
  //test_f(std::move(string));
  return 0;
}
