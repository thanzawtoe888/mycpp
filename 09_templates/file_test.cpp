#include <iostream>
// #include <string>
#include <fstream>
using namespace std;
string mytext;
int main (){
    ifstream myfile ("filename.txt");

    while (getline (myfile,mytext)){
    cout << mytext << endl;
    }

    // myfile << "This is file testing from fstream libray . " ;

    myfile.close();
}