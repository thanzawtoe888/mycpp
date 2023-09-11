#include <iostream>
#include <fstream>
using std::string;
using Mode = std::ios_base::openmode;

int main (){
    int i;
    double a,b;
    string s;

    std::ifstream in("text.txt", std::ios_base::in);

    while(in >> i >> a >> s >> b){
        std::cout << i << ", " << a << ", " << s << ", " << b << std::endl;
    }

    return 0;
}

// std::ifstream f_in(string& file_name, Mode mode);

// std::ofstream f_out (string& file_name , Mode mode);

// std::fstream f_in_out(string& file_name, Mode mode);