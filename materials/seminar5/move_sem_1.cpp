#include <iostream>
#include <cstring>

class String {

public:
        int size;
        char *c_string;

        String() = default;

        explicit String(const char *const c_str) {
                std::cout << "String(const char*)\n";
                std::cout << "new object" <<std::endl;
                size = strlen(c_str);
                c_string = new char[size];

                strcpy(c_string, c_str);
        }

        String(const String& other) {
                std::cout << "String(object)\n";
                std::cout << "new object\n";
                c_string = new char[other.size];
                strcpy(c_string, other.c_string);
                size = other.size;
        }

        ~String() = default;
/*
{
                std::cout << "Destr\n";
                std::cout << size << std::endl;
                delete[] c_string;
        }

*/

        String(String &&other) {
                std::cout << "String(String &&other\n";
                c_string = other.c_string;
                size = other.size;
                other.c_string = nullptr;
                other.size = 0;
        }

        String& operator=(String&& other) {
                std::cout << "Operator=&&\n";
                delete[] this->c_string;
                this->size = other.size;
                this->c_string = std::move(other.c_string);

                return *this;
        }

        String& operator=(const String& other) {
                std::cout << "Operator =\n";
                strcpy(this->c_string, other.c_string);
                size = other.size;
                return *this;
        }

};

void f(String str) {
        ;
}

String F() {
        return std::move(String(""));
}

int main() {
        String s = String("AAAAAAAAAA");
        std::cout << "size " << s.size << std::endl;
        s = std::move(String("ABC"));
        std::cout << "size " << s.size << std::endl;
        //F();
        return 0;
}
