# Find The Index of 0 to be Replaced to Get Maximum Length Sequence of Continuous Ones

## Mô tả bài toán
- **Đầu vào:** Một mảng nhị phân `a` (kích thước $n$) chỉ gồm các phần tử `0` và `1`.
- **Đầu ra:**
  1. Vị trí (index) của số `0` cần thay thế bằng số `1` để tạo thành chuỗi số `1` liên tục dài nhất, kèm theo mảng `a` sau khi đã thay thế.
  2. Nếu mảng không có số `0` nào, in ra thông báo `"Khong tim thay vi tri so 0 can thay the."`.

## Mô tả giải thuật
Sử dụng kỹ thuật duyệt mảng một lần (Sliding Window) kết hợp lưu vị trí số `0` gần nhất:

1. **Khởi tạo:**
   - `max_count = 0`: lưu độ dài chuỗi số `1` liên tục dài nhất tìm được.
   - `count = 0`: lưu độ dài chuỗi số `1` hiện tại.
   - `replace_zero = -1`: lưu vị trí số `0` cần thay thế.
   - `last_meet_zero = -1`: lưu vị trí số `0` cuối cùng vừa gặp.

2. **Duyệt mảng và cập nhật:**
   - Dùng vòng lặp `for (int i = 0; i < n; i++)` duyệt qua từng phần tử của mảng `a`.
   - Nếu `a[i] == 1`: tăng độ dài chuỗi hiện tại (`count++`).
   - Ngược lại (gặp số `0`):
     - Cập nhật lại `count = i - last_meet_zero` (độ dài chuỗi mới tính từ sau vị trí số `0` liền trước đó).
     - Cập nhật vị trí số `0` mới nhất: `last_meet_zero = i`.
   - Kiểm tra điều kiện: nếu `count > max_count` thì cập nhật `max_count = count` và `replace_zero = last_meet_zero`.

3. **Xử lý kết quả trong hàm `main`:**
   - Gọi hàm `find_index_of_zero(a, n)` và lưu kết quả vào biến `index`.
   - Nếu `index != -1`: in ra vị trí `index`, gán `a[index] = 1` và gọi hàm `inmang(a, n)` để in mảng mới.
   - Ngược lại: in ra thông báo không tìm thấy vị trí số `0` cần thay thế.

**Độ phức tạp thuật toán:** $O(n)$

## Test case
### Case 1:
#### Input:
```
Nhap so phan tu cua mang: 10
0 0 1 0 1 1 1 0 1 1
```
#### Output:
```
0 0 1 0 1 1 1 0 1 1
Vi tri so 0 can thay the de co chuoi 1 lien tuc dai nhat: 7
0 0 1 0 1 1 1 1 1 1
```
### Case 2:
#### Input:
```
Nhap so phan tu cua mang: 5
1 1 1 1 1
```
#### Output:
```
1 1 1 1 1
Khong tim thay vi tri so 0 can thay the.
```