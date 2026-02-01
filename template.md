# Template

## Template là gì

Template trong C++ cho phép bạn viết code tổng quát, dùng được cho nhiều kiểu dữ liệu khác nhau mà không phải viết lại nhiều lần.

## Hàm template
❌ Không dùng template
```cpp
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

```
👉 Bị lặp code.

✅ Dùng template

```cpp
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
int a = max(3, 5);          // T = int
double b = max(2.5, 1.7);  // T = double
```

## Template với nhiều kiểu dữ liệu

```cpp
template <typename T1, typename T2>
void print(T1 a, T2 b) {
    cout << a << " " << b << endl;
}
print(10, 3.14);
print("Tuấn", 100);
```