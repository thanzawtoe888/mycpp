#include <iostream>
#include <stdexcept>

int main (){
    try {
        int age = 8;

        if (age > 18 && age < 69){
            std::cout << "Access Granded! Your are old enough" << std::endl;
        }
        else if (age < 18){
            throw std::runtime_error("You are under 18!");
        }
        else {
            throw std::runtime_error("Your are too old!");
        }
    }
    catch (const std::runtime_error& ex){
        std::cout << ex.what()<< std::endl; //throw ပစ်လိုက်တဲ့ string message က .what() ထဲမာ ရှိတယ် သူက stdexceptကလာတာ
    }

    }
