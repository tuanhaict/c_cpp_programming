#include <iostream>
using namespace std;

int main()
{
    /*
    Khai báo array:
    <kiểu dữ liệu> tên_biến[độ dài mảng]; (chưa khởi tạo ban đầu các giá trị trong mảng)
    <kiểu dữ liệu> tên_biến[độ dài mảng] = {<giá trị khởi tạo 1>, <giá trị khởi tạo 2> };
    <kiểu dữ liệu> tên_biến[] = {<giá trị khởi tạo 1>, <giá trị khởi tạo 2> };

    */
    int array[4];              // chưa khởi tạo giá trị
    int arr[4] = {1, 2, 3, 4}; // khởi tạo các giá trị arr[0]=1, arr[1] = 2, arr[2]= 3, arr[3]=4
    int arr1[] = {1, 2, 3};    // xác định độ dài của mảng là 3 và arr1[0]=1, arr1[1] = 2, arr1[2]= 3

    // Initialization
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;

    // Printing the array elements and address of each element
    cout << "array[0] = " << array[0] << " , Address = " << &array[0] << endl;
    cout << "array[0] = " << array[1] << " , Address = " << &array[1] << endl;
    cout << "array[0] = " << array[2] << " , Address = " << &array[2] << endl;
    cout << "array[0] = " << array[3] << " , Address = " << &array[3] << endl;

    if (&array[0] == array)
        cout << "TRUE";
    // Cách lấy dữ liệu đầu vào cho mảng gồm n phần tử
    int arr[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    return 0;
}
