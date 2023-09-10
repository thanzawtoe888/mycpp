#include <iostream>
#include <variant>


int main (){
    std::variant<int , float> v1;
    v1 = 12;
    std::cout << std::get <int> (v1) << std::endl;
    std::variant<int, float> v2{3.14F};
    std::cout << std::get<1>(v2) << std::endl;

    v2 = std::get<int> (v1);
    v2 = std::get <0> (v1);
    v2 = v1;
    std::cout << std::get<int>(v2) << std::endl;
     
    return 0;
}