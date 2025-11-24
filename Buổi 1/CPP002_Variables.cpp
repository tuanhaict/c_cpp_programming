#include <iostream>

using namespace std;

int main()
{
    // Declaring an integer type variable A, allocates 4 bytes of memory.
    int A = 44635839935;

    cout << A << endl
         << "\n";
    // Prints the address of the variable A.
    cout << &A << endl;

    /*
        1. Variable name cant start with a number.
        2. Variable name can just contains [A-Z, a-z] [0-9], _
    */

    // Re-initialization of A.
    A = 10;
    int abc_de23_cdf = 20;
    cout << A << endl;
    cout << &A;
    return 0;
}
