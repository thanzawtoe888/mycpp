#include <iostream>
#include <optional>

std::optional<std::string> StringFactory (bool create){
    if (create){
        return "Modern C++ is Awesome";

    }
    return {};
}

int main (){
    std::cout << StringFactory (true).value() << '\n' << std::endl;
    std::cout << StringFactory (false).value_or(":(") << '\n' << std::endl; 
}