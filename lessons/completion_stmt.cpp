#include <iostream>

int main()
{
    std::cout << "Prime numbers between 1 and 100\n";

    for (int i = 2; i < 100; ++i) {
        bool isPrime = true;

        for (int j = 2; j < i; ++j)

        if (isPrime) {
            std::cout << i << " ";
        }
    }
}
