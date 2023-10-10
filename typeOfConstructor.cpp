#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called." << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        std::cout << "Copy constructor called." << std::endl;
    }

    // Copy assignment operator
    MyClass& operator=(const MyClass& other) {
        std::cout << "Copy assignment operator called." << std::endl;
        return *this;
    }

    // Move constructor
    MyClass(MyClass&& other) {
        std::cout << "Move constructor called." << std::endl;
    }

    // Move assignment operator
    MyClass& operator=(MyClass&& other) {
        std::cout << "Move assignment operator called." << std::endl;
        return *this;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    MyClass obj1;           // Default constructor called
    MyClass obj2 = obj1;    // Copy constructor called
    MyClass obj3;
    obj3 = obj2;            // Copy assignment operator called

    MyClass obj4 = std::move(obj1);  // Move constructor called
    MyClass obj5;
    obj5 = std::move(obj4);          // Move assignment operator called

    return 0;
}
