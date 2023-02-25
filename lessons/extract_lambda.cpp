#include <iostream>
#include <vector>
#include <algorithm>

template <typename Range>
void print(const Range &r, const char *separator)
{
    auto iter = begin(r);
    const auto iterEnd = end(r);

    if (iter != iterEnd)
        std::cout << *iter;

    while (++iter != iterEnd)
        std::cout << separator << *iter;

    std::cout << '\n';
}

void sort(std::vector<int>& v)
{
    for (size_t i = 0; i < v.size() - 1; ++i) {
        for (size_t j = 0; j < v.size() - i - 1; ++j) {
            using std::swap;
            int& a = v[j + 1];
            int& b = v[j];

            if (a < b)
                swap(a, b);
        }
    }
}
int main()
{
    std::vector<int> v = {5, 13, 1, 8, 2, 1, 3};
    sort(v);
    print(v, ", ");
}
