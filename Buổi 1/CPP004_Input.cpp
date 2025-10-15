#include <iostream>
#include <string>
using namespace std;

int main()
{
    // cin - console input
    int a;
    cin >> a;
    // in ra màn hình với cout
    cout << "Variable name a = " << a << endl;

    string name, surname;

    cout << "Enter your name : ";
    cin >> name;

    cout << "Enter your surname : ";
    cin >> surname;

    cout << "Welcome " << name << " " << surname << endl;

    // Lấy cả dòng
    getline(cin, name);

    // Lưu ý: Khi dùng getline mà phía trước có cin thì pải cin.igore() để bỏ đi ký tự "\n" còn trong vùng đệm
    cin >> a;
    cin.ignore();
    getline(cin, name);

    // Input, output với C
    /*
    ***** Input ********
    Dùng lệnh scanf("kí hiệu", &biến)
    ---- Kí hiệu cho số nguyên:
    %d, %ld, %lld lần lượt cho int, long, long long
    %u, %lu, %llu lần lượt cho unsigned int, unsigned long, unsigned long long
    ---- Kí hiệu cho số thực
    %f, %lf lần lượt cho float, double
    ---- Kí hiệu cho chuỗi: %s
    ---- Kí hiệu cho kí tự: %c
    ---- Kí hiệu cho số hexa: %x (chữ thường), %X (chữ hoa)
    ---- Kí hiệu cho số bát phân: %o
    */
    // Ví dụ nhập số int
    scanf("%d", &a); // lưu ý phải có kí hiệu địa chỉ &
    /*
    ***** Output ********
    Dùng lệnh printf("kí hiệu", biến)
    */
    printf("%d", a); // không có kí hiệu địa chỉ như scanf
    return 0;
}
