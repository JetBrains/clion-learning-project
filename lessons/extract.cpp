#include <iostream>
#include <vector>

struct Circle
{
    float center;
    float radius;
};

int main()
{
    std::vector<Circle> circles;
    circles.emplace_back(Circle{2, 2});
    circles.emplace_back(Circle{3, 5});

    for (const auto& circle : circles) {
        std::cout << "area = " << 3.1415926f * circle.radius * circle.radius << '\n';
        std::cout << "circumference = " << 2 * 3.1415926f * circle.radius << '\n';
    }
}
