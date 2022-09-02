// Variable assignment and initialization
#include <iostream>

int main() {
    int x; // define an integer variable named x
    int y, z; // define two integer variables, named y and z
    
    int width; // define an integer variable named width
    width = 5; // copy assignment of value 5 into variable width
    // variable width now has value 5
    
    int a; // no initializer
    int b = 5; // initializer after equals sign
    int c ( 6 ); // initializer in parenthesis
    int d { 7 }; // initializer in braces (Direct initialization)

    // int height { 4.5 }; // error: a number with a fractional value can't fit into an int
    int depth {   }; // zero initialization to value 0
    
    //int a, b = 5; // wrong (a is not initialized!)
    //int a = 5, b = 5; // correct
    
    std::cout << "Vars done!\n";

    return 0;
}
