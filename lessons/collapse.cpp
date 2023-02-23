#include <string>
#include <iostream>

struct Person
{
    std::string firstName;
    std::string lastName;
    int age;

    void print() const
    {
        std::cout << lastName << ", " << firstName << " (" << age << ")\n";
    }
};

int main()
{
    Person p = {"Jane", "Doe", 23};
    p.print();
}
