#include <iostream>
#include <vector>
#include <algorithm>

template <typename Range>
void print(const Range& r)
{
    auto iter = begin(r);
    const auto iterEnd = end(r);

    if (iter != iterEnd)
        std::cout << *iter;

    while (++iter != iterEnd)
        std::cout << ", " << *iter;

    std::cout << '\n';
}

template <typename Range>
void bitwiseCopy(Range& dst, const Range& src)
{
    const auto n = end(src) - begin(src);
    std::memmove(&dst[0], &src[0], n * sizeof(src[0]));
}

int main()
{
    std::vector<int> v = {1, 1, 2, 3, 5, 8, 13};
    print(v);

    std::vector<int> w(v.size());
    bitwiseCopy(w, v);
    print(w);
}
