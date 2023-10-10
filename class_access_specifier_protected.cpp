#include <iostream>

class myBaseClass{
    private:
    int a =1;
    int b = 2;
    
    protected:
    int c=3;
    int d=4;

    public :
    void mymethod(){
    std::cout << "Hello world , This is from the public class " <<std::endl;
    }
};

class myDerivedClass : protected myBaseClass{
    public:
    void mymethod1(){
    std::cout << "This is from the protected class: " << c << " " << d << std::endl; 
    }

};

class myChildClass : public myBaseClass{
    public:
    void mymethod2() {
    std::cout << "Hello , this is from the child class and the value of c is : " << c << " and the value of d is : " << d << std::endl;
    }

};

int main () {
    myDerivedClass myobj1;
    myChildClass myobj2;
    myobj1.mymethod1();
    myobj2.mymethod2();
    return 0;


}