#include <iostream>

struct Base {
    int a = 0;
    struct Nested {};
};

struct Derived : Base {
    int b = 4;
    int c = 12;
    int d = b * a;
};

struct Other {
};
