#include <algorithm>
#include <numeric>
#include <cassert>
#include <iostream>

// The Vector class is a simple wrapper around a dynamically
// allocated, non-resizable array.
template <typename T>
class Vector
{
public:
    Vector() = default;

    explicit Vector(std::size_t size)
    : data(new T[size]), size(size)
    {}

    Vector(const Vector& other)
    : data(new T[other.size], size(other.size))
    {
        std::copy(other.data, other.data + size, data);
    }

    Vector(Vector&& other) noexcept
    : data(other.data), size(other.size)
    {
        other.data = nullptr;
        other.size = 0;
    }

    ~Vector()
    {
        delete[] data;
    }

    Vector& operator=(const Vector& other)
    {
        if (this != &other)
        {
            delete[] data;
            data = new T[other.size];
            size = other.size;
            std::copy(other.data, other.data + size, data);
        }

        return *this;
    }

    Vector& operator=(Vector&& other) noexcept
    {
        if (this != &other)
        {
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }

        return *this;
    }

    T& operator[](std::size_t index) noexcept
    {
        assert(index < size);
        return data[index];
    }

    [[nodiscard]] T* begin() const noexcept
    {
        return data;
    }

    [[nodiscard]] T* end() const noexcept
    {
        return data + size;
    }

private:
    T* data = nullptr;
    std::size_t size = 0;
};

auto fillWithSequence(Vector<int>& v)
{
    std::iota(v.begin(), v.end(), 1);
}

int main()
{
    Vector<int> v(10);
    fillWithSequence(v);
    for (auto& i : v)
        std::cout << i << " ";
}
