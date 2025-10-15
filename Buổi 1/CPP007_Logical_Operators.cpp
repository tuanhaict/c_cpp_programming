#include <iostream>

using namespace std;

int main()
{
    // AND - &&
    // True only when both the expressions are true

    cout << (7 > 5 && 5 != 10) << endl;
    cout << (2 > 5 && 5 != 10) << endl;

    int a = 5 && 6; // thực hiện đi từ trái qua phải, gán bằng biểu thức đúng cuối cùng

    // OR - ||
    // True when both the expressions are true or only one of them is true.

    cout << (2 > 5 || 5 != 10) << endl;
    cout << (2 > 5 || 5 != 5) << endl;

    int b = 0 || 6 || 5; // thực hiện đi từ trái qua phải, gán bằng biểu thức đúng đầu tiên

    // NOT - !
    // Return true if result is false and vice versa.
    cout << !(5 == 5) << endl;
    return 0;
}
