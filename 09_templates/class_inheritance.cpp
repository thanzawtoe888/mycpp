#include <iostream>
using namespace std;

class baseclass {
    public:
    int a = 1;
    int b=2;
    void mymethod(){
        cout << "Hello world" << endl;
    }

};

class derivedclass : public baseclass{
    public:
    int c =3;
    int d = 4;
    void mymethod() {
        cout << "The value of a is : " << a << " The value of b is : " << b <<endl;
    }


};

class childclass : public baseclass {
    public :
    void mymethod(){
        cout << "This is from child class . " << endl;
    }
};

int main (){
    derivedclass obj1;
    baseclass obj0;
    childclass obj2;


    obj1.mymethod();
    obj2.mymethod();
    obj0.mymethod();

    

}