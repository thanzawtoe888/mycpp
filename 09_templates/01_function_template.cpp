#include <iostream>
#include <typeinfo>

template <typename T>
T abs (T x){
    return (x >= 0) ? x : -x; //condition ? expression_if_true : expression_if_false


}

int main (){
    const double x = 5.5;
    const int y = -5;

    auto abs_x = abs<double> (x);
    int abs_y = abs<int>(y);
    
    double abs_x_2 = abs(x); //type-deduction phit ng dl becoz datatype ma htat loz
    double abs_y_2 = abs(y); //type-deduction phit ng dl becoz datatype ma htat loz

    std::cout << "The Value of abs_x is : " << abs_x << std::endl;
    std::cout << "The Value of abs_y is : " << abs_y<< std::endl;

    std::cout << "Type of abs_x : " << typeid(abs_x).name() << std::endl;
    std::cout << "Type of abs_y : " << typeid(abs_y).name() << std::endl;

    // if (std::type_info(abs_x_2) = std::typeid (double)) {
    //     std::cout << "abs_x_2 is double. " << std::endl;
    // }

    // if (std::type_info(abs_y_2) = std::type_info (double)) {
    //     std::cout << "abs_y_2 is double. " << std::endl;
    // }
    
    }