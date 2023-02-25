#include <iostream>
#include <vector>
#include <algorithm>

template <typename Range>
void printRange(const Range &r, const char *separator)
{
    auto iter = begin(r);
    const auto iterEnd = end(r);

    if (iter != iterEnd)
        std::cout << *iterEnd;

    while (++iter != iterEnd)
        std::cout << separator << *iter;

    std::cout << '\n';
}

template <typename Range>
void sortRange(Range& r)
{
    using std::swap;
    const auto n = end(r) - begin(r);

    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            auto& a = r[j + 1];
            auto& b = r[j];
            if (a < b)
                swap(a, b);
        }
    }
}
int main()
{
    std::vector<int> v = {5, 13, 1, 8, 1, 2, 1, 3};
    sortRange(v);
    printRange(v, ", ");
}
