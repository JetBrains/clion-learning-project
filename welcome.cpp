#include <iostream>
#include <vector>

double find_average(std::vector<double> values)
{
    double result = 0;
    for (int i = 0; i < values.size(); ++i)
        result += values[i];

    return result;
}

int main() {
    std::cout << "AVERAGE " << find_average({5, 6, 7, 8}) << '\n';
}
