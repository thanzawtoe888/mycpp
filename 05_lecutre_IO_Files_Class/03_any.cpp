#include <any>
#include <iostream>
int main() 
{
    std::any a;

    a= 1;
    std::cout << std::any_cast <int> (a) << std::endl;

    a=3.14;
    std::cout << std::any_cast <double> (a) << std::endl;

    a = true; 
    std::cout << std::boolalpha << std::any_cast<bool>(a) << std::endl;
}