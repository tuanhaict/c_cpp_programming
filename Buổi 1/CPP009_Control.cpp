#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    cin >> a;

    // if else
    if (a % 3 == 0)
    {
        cout << "day la chia het cho 3";
    }
    else if (a % 3 == 1)
        cout << "day la so le";
    else
        cout << "";

    int b = a % 5;
    // Với switch case thì cần nó break nếu không muốn nó nhảy sang  case tiếp theo
    // switch case chỉ sử dụng cho so sánh bằng, áp dụng khi có nhiều giá trị muốn so khớp
    switch (b)
    {
    case 1:
        cout << "";
        break;
    case 2:
        cout << "";
        break;
    case 3:
        cout << "";
        break;
    default:
        break;
    }

    // vòng lặp for và các biến thể của nó
    // cấu trúc vòng lặp for

    /*
    for (start; end; bước nhảy)
    {
    }
    */
    for (int i = 9; i >= 0; i = i - 1)
    {
        cout << i;
    }
    for (int i = 0; i < 10; ++i)
    {
        cout << i;
    }
    // có thể bỏ start
    int i = 0;
    for (; i < 10; ++i)
    {
        cout << 0;
    }
    // có thể bỏ bước nhảy
    for (; i < 10;)
    {
        cout << i;
        // nhưng phải nhảy ở trong block
        ++i;
    }
    // thậm chí có thể bỏ điều kiện, nhưng trong block phải break nếu không sẽ lặp vô hạn
    for (int i = 0;; ++i)
    {
        cout << i;
        ++i;
        if (i > 10)
            break;
    }

    // có thể bỏ cả 3 vẫn đúng cú pháp
    for (;;)
    {
    }

    // vòng lặp while
    int temp = 10;
    int subtract = 1;
    while (temp >= 0)
    {
        temp = temp - subtract;
        subtract = subtract + 1;
    }
    // khi code thường cho while (1) để khỏi xác định điều kiện dừng ở đầu vòng while, mình sẽ xác định
    // điều kiện dừng ở trong vòng
    while (1)
    {
        temp = temp - subtract;
        subtract++;
        if (temp < 0)
            break;
    }

    // vòng do while
    //  chạy do trước -> đến vòng while
    do
    {
        cout << "";
    } while (1);

    // break, continue
    // break để thoát khỏi vòng lặp
    // continue để bỏ qua 1 bước của vòng lặp

    for (int i = 1; i <= 1000; ++i)
    {
        if (i == 100)
            continue;
        cout << i;
    }
    return 0;
}