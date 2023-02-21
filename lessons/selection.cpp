#include <iostream>

void doSomething(const std::string& string1, const std::string& string2, const std::string& string3);

void example(bool condition)
{
    if (condition)
    {
        std::cout << "Begin of the work\n";
        doSomething("first string", "This is a long string that you can select for refactoring", "third string");
        std::cout << "End of the work\n";
    }
}
