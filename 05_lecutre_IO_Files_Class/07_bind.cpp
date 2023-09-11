#include <iostream>
#include <functional>

void foo(int a, int b, int c) {
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
}

int main() {
    auto bound_func = std::bind(foo, std::placeholders::_2, 42, std::placeholders::_1);

    // When calling bound_func, we provide values for the placeholders.
    bound_func(10, 20);  // This will call foo(20, 42, 10);
    
    return 0;
}