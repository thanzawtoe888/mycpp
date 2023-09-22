#include <iostream>

class myclass{
    public:
        int mydata1 = 1;
        int mydata2 = 3;
        void myfun1();
};

void myclass::myfun1(){                             // function or method (outside of class) using with :: scope resolution
    std::cout << "This is myfun1 : " << std::endl;
}

int main (){
    myclass myobj;
    myclass myobj1;
    myobj.myfun1();
    std::cout << "My Data 1 is : " << myobj.mydata1 << std::endl;
    std::cout << "My Data 2 is : " << myobj.mydata2 << std::endl;



}