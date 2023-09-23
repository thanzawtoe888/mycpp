#include <iostream>
using namespace std;

class myAccess {
    public:
    int a = 1;
    int b =2;

    void myAcces(){
        cout << "Hello this is Public. \n" << endl;
    };
    

    private:
    int c = 3;
    int d = 4;
    

};

// void myAccess::myAccess(){
//         cout << "Hello this is Public. \n" << endl;
//         cout << "The public number are :" << c << " , " << d << endl;
        
//     }
int main (){
    myAccess myobj1;
    myobj1.myAcces();
    
}