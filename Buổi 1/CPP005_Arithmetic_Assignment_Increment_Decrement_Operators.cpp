#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 5;

    cout << a + b << endl; // Addition
    cout << a - b << endl; // Subtraction
    cout << a / b << endl; // Division
    cout << a * b << endl; // Multiplication

    cout << a % b << endl; // Modulo -> Remainder

    cout << ++a << endl; // Pre-Increment
    cout << --a << endl; // Pre-decrement
    cout << a++ << endl; // Post-Increment
    cout << a-- << endl; // Post-decrement

    /*
    Khác biệt giữa ++a và a++
    Ví dụ cho a = 5
    Nếu b = ++a thì b = 6, vì ++a sẽ thực hiện tăng a 1 đơn vị trước
    Nếu b = a++ thì b = 5, vì nó gán b = a trước khi tăng a 1 đơn vị
    */
    return 0;
}
