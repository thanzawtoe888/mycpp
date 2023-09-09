#include <iostream>
#include <tuple>
#include <string>
using std::string;

int main (){
    std::tuple<double, char , string > student1;
    using Student = std::tuple<double, char , string>;
    Student student2{1.4 , 'A', "Jose"};
    PrintStudent(student2);
    std::cout << std::get<string>(student2) << std::endl;
    std::cout << std::get<2>(student2) << std::endl;

    auto [gpa, grade, name] = std::make_tuple(4.4, 'B' , "");
}