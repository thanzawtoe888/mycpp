#include <iostream>
using namespace std;


int main (){
    int i=0;
    int arr;
    int arry[]={};
    do{
    cout << "Counting time : " << i << " " << "Enter arr : " << " " << endl;
    cin >> arr ;
    i++ ;
    }
    while (i < 5);
    return 0;
    cout << "the arrary are : " << arr << endl;

    // int arr_size = size_of_array(arr) ;
    // std::cout << "size of arrary is : " << arr_size << std::endl;
}