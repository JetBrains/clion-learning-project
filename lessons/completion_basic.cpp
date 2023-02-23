#include <string>
#include <iostream>

struct Movie
{
    std::string title;
    int year = 0;
    bool demo = false;
    std::string director;
    std::string distributor;
};

int main()
{
    Movie m = {"Aviator", 2005, false, "Martin Scorsese", "Miramax Films"};
    std::cout << m.
}