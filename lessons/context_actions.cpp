#include <string_view>
#include <iostream>

void funcWithUnusedParam(std::string_view used, std::string_view redundant) {
    std::cout << "Used parameter: " << used << '\n';
}

int intentionExample(bool z, bool a, bool b) {
    if (z)
        return a;
    else
        return b;
}

int main() {
    funcWithUnusedParam("first", "second");
    funcWithUnusedParam("used", "unused");
}
