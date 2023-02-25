#include <string>
#include <iostream>

class Item
{
public:
    explicit Item(std::string name)
    : name(std::move(name)), id(0)
    {}

    std::string getName() { return name; }
    int getId() const noexcept { return id; }

private:
    std::string name;
    int id;
};

int main()
{
    Item item("Bob");
    std::cout << item.getName();
}
