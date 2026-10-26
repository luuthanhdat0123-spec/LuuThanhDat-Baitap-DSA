# FIND THE LARGEST SUBARRAY FORMED BY CONSECUTIVE INTEGERS

## Mô tả bài toán
    - Đầu vào: Một mảng số nguyên gồm $n$ phần tử
    - Đầu ra: Một mảng dãy con thỏa mãn 2 điều kiện:
        - Các phần tử con không có giá trị nào giống nhau
        - Các giá trị của phần tử con phải tạo thành 1 dãy số nguyên liên tiếp nhưng không nhất thiết phải đúng thứ tự
## Mô tả giải thuật
    - Khởi tạo biến dem_len = 0 để lưu độ dài của dãy con dài nhất và biến start = 0 để lưu vị trí bắt đầu của dãy con dài nhất
    - Dùng vòng lặp i chạy từ 0 đến n - 1. Với mỗi vị trí i, khởi tạo:
        - min = a[i]: giá trị nhỏ nhất hiện tại.
        - max = a[i]: giá trị lớn nhất hiện tại.
    - Dùng vòng lặp j chạy từ i + 1 đến n - 1 để lần lượt mở rộng dãy con từ a[i] đến a[j].
    - Bên trong vòng lặp j dùng vòng lặp k kiểm tra a[j] với các phần tử từ a[i] đến a[j - 1].
        - Nếu tồn tại phần tử bị trùng, dừng vòng lặp k và vòng lặp j, chuyển sang vị trí bắt đầu i tiếp theo.
        - Nếu không có phần tử trùng, tiếp tục kiểm tra dãy con.
    - So sánh a[j] với min và max để cập nhật giá trị nhỏ nhất, lớn nhất của dãy con hiện tại.
    - Kiểm tra tính liên tiếp:
        - Nếu thỏa mãn điều kiện: $max-min=j-i$ thì các phần tử của dãy con là những số nguyên liên tiếp.
        - Tính độ dài L với các dãy con thỏa mãn để tìm ra dãy con lớn nhất
    - In dãy con lớn nhất thỏa mãn các điều kiện ra màn hình.
** Độ phức tạp thuật toán $O(n^3)$**

## Test case
### Case 1:
#### Input:
```
nhap so phan tu cua mang: 8
nhap tung phan tu cho mang: 2 0 2 1 4 3 1 0
```
#### Output:
```
0 2 1 4 3 
```
---
### Case 2:
#### Input:
```
nhap so phan tu cua mang: 8
nhap tung phan tu cho mang: 2 0 2 5 1 4 0 7
```
#### Output:
```
Khong tim thay mang con lien tiep (do dai >= 2)
```