#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Số nguyên
    int a = 10, b = 35; // 4 bytes
    cout << "Value of a : " << a << " Address of a : " << &a << endl;
    cout << "Value of b : " << b << " Address of b : " << &b << endl;
    short s = 20; // 2 bytes
    cout << "Value of s : " << s << endl;
    long c = 345;             // 4 bytes
    long long d = 2741878924; // 8 bytes

    // Số nguyên dương
    unsigned int ahh = 10;
    unsigned short xxxxx = 123;
    unsigned long cjdf = 123;
    unsigned long long fdfjid = 123;

    // Số thực
    float f1 = 20.03f;       // 4 bytes
    double d1 = 50.55416416; // 8 bytes
    cout << "Value of f1 : " << f1 << endl;
    cout << "Value of d1 : " << d1 << endl;

    // Kí tự
    char c1 = 'A';
    cout << c1 << endl;

    // Chuỗi
    string s1 = "Hello Tridib";
    string s3 = "A"; // Lưu ý: "A" khác 'A'
    cout << s1 << endl;

    string s2 = "Welcome to CPP !";
    cout << s2 << endl;

    string combineStrings = s1 + ", " + s2;
    cout << combineStrings << endl;

    // Boolean
    bool b1 = true;
    cout << b1 << endl;
    // Khi thực hiện ép kiểu sang boolean, số 0 chuyển thành false, các số khác là true.
    b1 = 1515; // 1515 chuyển thành true
    cout << b1 << endl;
    b1 = -445; //-445 chuyển thành true
    cout << b1 << endl;
    b1 = 0; // 0 chuyển thành false
    cout << b1 << endl;

    return 0;
}
