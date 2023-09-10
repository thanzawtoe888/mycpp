#include <iostream>

int main(){
    int a = 3;
    int b = 5;
    int c = 6;

    //before 
    std::cout << a << ' ' << b << ' ' << c << '\n' << std::endl;

    //swap a and b using swap
    std::swap(a,b);

    //swap a and c using swap
    std::swap(a,c);

    //after
    std::cout << a << ' ' << b << ' ' << c << '\n' << std::endl;
    return 0;


}