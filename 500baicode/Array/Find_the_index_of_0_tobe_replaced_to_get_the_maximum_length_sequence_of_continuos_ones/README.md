# FIND THE INDEX OF 0 TO BE REPLACED TO GET THE MAXIMUM LENGTH SEQUENCE OF CONTINUOUS ONES

## Mô tả bài toán
    - Đầu vào: Một mảng nhị phân gồm $n$ phần tử (chỉ gồm các số 0 và 1)
    - Đầu ra:
        - In ra vị trí của số 0 cần thay thế bằng số 1 để tạo thành chuỗi số 1 liên tục dài nhất và in ra mảng sau khi thay thế
        - Nếu không tìm thấy số 0 nào trong mảng, in ra thông báo "Khong tim thay vi tri so 0 can thay the."

## Mô tả giải thuật
    - Hàm nhập mảng (nhapmang), hàm in mảng (inmang)
    - Hàm tìm vị trí số 0 cần thay thế (find_index_of_zero):
        - Khởi tạo biến max_count = 0 để lưu độ dài chuỗi 1 dài nhất tìm được
        - Khởi tạo biến count = 0 để lưu độ dài chuỗi 1 hiện tại
        - Khởi tạo biến replace_zero = -1 để lưu vị trí số 0 cần thay thế
        - Khởi tạo biến last_meet_zero = -1 để lưu vị trí số 0 cuối cùng gặp
        - Dùng vòng lặp for i chạy từ 0 đến n - 1:
            - Nếu a[i] == 1 thì tăng count lên 1 (count++)
            - Ngược lại (gặp số 0):
                - Tính lại count = i - last_meet_zero (độ dài mảng lúc gặp số 0 tiếp theo kể từ vị trí số 0 cuối cùng gặp)
                - Cập nhật last_meet_zero = i
            - Kiểm tra điều kiện: nếu count > max_count thì:
                - Gán max_count = count
                - Gán replace_zero = last_meet_zero
        - Trả về giá trị replace_zero
    - Trong hàm main:
        - Gọi hàm tìm vị trí và lưu vào biến index
        - Nếu index != -1 thì in ra vị trí index, gán a[index] = 1 và in lại mảng sau khi thay thế
        - Ngược lại thì in ra thông báo không tìm thấy vị trí số 0 cần thay thế

**Độ phức tạp thuật toán $O(n)$**

## Test case:
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
---
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