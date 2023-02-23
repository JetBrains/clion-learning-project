#include <iostream>
#include <string>

struct Person
{
    std::string firstName;
    std::string lastName;
    int age;
};

int main()
{
    Person p = {"Jane", "Doe", 23};
    std::cout << p.lastName;
}
