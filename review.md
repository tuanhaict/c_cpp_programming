## Những lưu ý, bẫy cần tránh

- Khi thao tác với con trỏ, chỉ khi dùng `*p` thì giá trị của biến mới bị thay đổi, còn ko nếu chỉ thao tác với các địa chỉ thì ko hề thay đổi
- Lưu ý khi dùng tham chiếu `&`, tức là 2 biến là label của cùng 1 nơi, thay đổi cái này ảnh hưởng cái kia.
- Giá trị mặc định (khi khai báo mà chưa khởi tạo): 
    + Với biến global: giá trị sẽ là 0, 0.0, false (những giá trị mang nghĩa là 0)
    + Với biến local: nếu cấp phát động (như global), ko cấp phát động (giá trị ngẫu nhiên)
- Khi dùng `sizeof(struct)`, thì cần có padding.
- Với OOP, lưu ý:
    + Khi represent biến bới class cha, cần phải xem có virtual để quyết định hàm nào được gọi
    + Khi represent bởi class đó, ko cần quan tâm.
- Thứ tự hủy, nó ngược với thứ tự khởi tạo. Lưu ý ra khỏi block {} thì sẽ bị hủy.
- Switch case thì nếu ko có break thì phải thực hiện tiếp.
- Lưu ý: Khi dùng `0x` thì là hệ 16, mỗi số là 4 bit.
- Lỗi ko giải phóng vùng nhớ là lỗi quan trọng, nếu gặp thì nên chọn.
- Chuỗi thì lưu ý là còn có giá trị kết thúc '\0'
- Khi chia số nguyên cho số nguyên thì kết quả là số nguyên.
- Khi cộng trừ nhân chia nhiều biến ở nhiều kiểu dữ liệu, kết quả kiểu dữ liệu kích thước lớn nhất.
- Lưu ý: Khi dùng ++, -- thì giá trị của biến đó cũng bị thay đổi. Chứ ko phải chỉ dùng để tính giá trị cho biểu thức khác.
- Khi cộng con trỏ mảng với 1 số n, phải di chuyển tới địa chỉ cách đó `n*sizeof(1 phần tử)`
- Thứ tự thực hiện của vòng lặp for:
    + Khởi tạo start
    + Chạy trong vòng lặp
    + Bước nhảy
    + Kiểm tra điều kiện rồi quay lại vòng lặp.
- Thứ tự vòng while:
    + Kiếm tra điều kiện
    + Chạy vòng lặp
    + Kiểm tra điều kiện.