#include <iostream>
#include <list>

using namespace std;

int main (){
    list<int> numbers_list({1,10,100,1000});
    list<string> vocals_list( {"a","e","i","o","u"} );

    for ( int val : numbers_list)
    cout << val << " " ;

    for ( string val : vocals_list)
    cout << val << " ";

    vocals_list.push_front("aa");
    vocals_list.push_back("z");

    for ( string val : vocals_list)
    cout << val << " " ;

    list<int> new_list({3,30,300,3000});

    for (int val : new_list)
    cout << val << " " ;
}