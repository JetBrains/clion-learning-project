#include <iostream>
#include <vector>
#include <algorithm>

template <typename Range>
void printRange(const Range& r)
{
    auto iter = begin(r);
    const auto iterEnd = end(r);

    if (iter != iterEnd)
        std::cout << *iterEnd;

    while (++iter != iterEnd)
        std::cout << ", " << *iter;

    std::cout << '\n';
}

template <typename Range>
void bitwiseCopyRange(Range& dst, const Range& src)
{
    const auto n = end(src) - begin(src);
    std::memmove(&dst[0], &src[0], n * sizeof(src[0]));
}

int main()
{
    std::vector<int> v = {5, 13, 1, 8, 1, 2, 1, 3};
    printRange(v);

    std::vector<int> w(v.size());
    bitwiseCopyRange(w, v);
    printRange(w);
}
