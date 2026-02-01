# Biến static
Biến static là biến có vòng đời suốt chương trình,
dù khai báo ở đâu (trong hàm, trong class, hay ngoài file).

## Biến static trong hàm
```cpp
void f() {
    static int x = 0;
    x++;
    cout << x << endl;
}
```
```cpp
f(); // 1
f(); // 2
f(); // 3
```
x chỉ khởi tạo đúng 1 lần. Giá trị được giữ lại giữa các lần gọi hàm

## So sánh biến thường và biến static trong hàm
```cpp
void test() {
    int a = 0;
    static int b = 0;
    a++; b++;
    cout << a << " " << b << endl;
}
```
```cpp
1 1
1 2
1 3
```
