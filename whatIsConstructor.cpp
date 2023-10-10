#include <iostream>
#include <string>

class Student {
public:
    // Parameterized constructor
    Student(const std::string& name, int age) {
        studentName = name;
        studentAge = age;
        std::cout << "Student object created with name: " << studentName << " and age: " << studentAge << std::endl;
    }

    // Member function to display student information
    void displayInfo() {
        std::cout << "Name: " << studentName << std::endl;
        std::cout << "Age: " << studentAge << std::endl;
    }

private:
    std::string studentName;
    int studentAge;
};

int main() {
    // Create Student objects using the constructor
    Student student1("Alice", 20);
    Student student2("Bob", 22);

    // Call member function to display student information
    std::cout << "Student 1 Information:" << std::endl;
    student1.displayInfo();

    std::cout << "\nStudent 2 Information:" << std::endl;
    student2.displayInfo();

    return 0;
}
