#include <iostream>
#include <string>
using namespace std;

int main(){

    /*References*/
    string name;
    string &nameref = name; //Reference to name

    name = "Sebastian";
    cout << name << "\n";   //output value of name (Sebastian)
    cout << nameref << "\n";    //output reference to name (Sebastian)

    /*Memory Address*/
    cout << &name << "\n"; //output memory address of name (xxxxxx)

    /*Pointers*/
    string* nameptr = &name;

    cout << nameptr << "\n"; // Reference: Output the memory address of name with the pointer (xxxxxx)
    cout << *nameptr << "\n"; // Dereference: Output the value of name with the pointer (Sebastian)
    
    *nameptr = "Sebas";

    cout << *ptr << "\n";   // output the new value of the pointer (Sebas)

    cout << name << "\n";   // output the new value of name variable (Sebas)

    return 0;
}
