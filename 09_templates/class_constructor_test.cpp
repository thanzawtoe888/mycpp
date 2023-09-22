#include <iostream>
using namespace std;
class myfish{
public:
    string fish1 ;
    string fish2 ;
    int total_num;
    void myfun();

    myfish(string x , string y , int z){
        fish1 = x;
        fish2 = y;
        total_num = z;

    }
};

void myfish::myfun (){
    cout << fish1 << " " << fish2 << " " << total_num << endl;
}


int main (){
    myfish tiger("yellow", "red", 21);

    tiger.myfun();
    return 0;

}




// #include <iostream>
// #include <string>

// using namespace std; // Add this line to use 'string' without 'std::'

// class myfish {
// public:
//     string fish1;
//     string fish2;
//     int total_num;

//     myfish(string x, string y, int z) {
//         fish1 = x;
//         fish2 = y;
//         total_num = z;
//     }

//     void myfun() {
//         cout << fish1 << " " << fish2 << " " << total_num << endl;
//     }
// };

// int main() {
//     myfish tiger("yellow", "red", 21);
//     tiger.myfun(); // Call the method on the 'tiger' object
//     return 0;
// }
