#include <iostream>
#include <string> 
 
class Auto;
 
class Person
{
public:
    Person(std::string n)
    {
        name = n;
    }
    void drive(Auto &a);
    void setPrice(Auto &a, int price);
 
private:
    std::string name;
};
 
class Auto
{
    friend void Person::drive(Auto &);
    friend void Person::setPrice(Auto &, int price);
public:
    Auto(std::string autoName, int autoPrice)
    {
        name = autoName;
        price = autoPrice;
    }
    std::string getName() { return name; }
    int getPrice() { return price; }
 
private:
    std::string name;   // название автомобиля
    int price;  // цена автомобиля
};
 
void Person::drive(Auto &a)
{
    std::cout << name << " drives " << a.name << std::endl;
}
void Person::setPrice(Auto &a, int price)
{
    if (price > 0)
        a.price = price;
}
 
int main()
{
    Auto tesla("Tesla", 5000);
    Person tom("Tom");
    tom.drive(tesla);
    tom.setPrice(tesla, 8000);
    std::cout << tesla.getName() << " : " << tesla.getPrice() << std::endl;
 
    return 0;
}
