# FIND MAXIMUM LENGTH SUBARRAY HAVING A GIVEN SUM

## Mô tả bài toán
    - Đầu vào: Một mảng số nguyên gồm $n$ phần tử và tổng mong muốn
    - Đầu ra: 
        - In ra các mảng con có tổng các phần tử bằng tổng mong muốn
        - In ra mảng con có nhiều phần tử nhất thỏa mãn
        - Nếu không tìm được mảng con nào thỏa mãn, in ra thông báo "không tìm thấy mảng con có tổng bằng tổng mong muốn"

## Mô tả giải thuật:
    - Khởi tạo biến sum1: là tổng mà người dùng muốn
    - Khởi tạo biến max_length = 0; max_start = 0; max_end = 0;
    - Khởi tạo biến check để kiểm tra xem có dãy nào thỏa mãn tổng không
    - Dùng vòng for i (0->n):
        - Khởi tạo biến sum2 để kiểm tra xem bằng sum1 không
        - Dùng vòng for j (i->n): 
            - sum2 += a[j];
            - Nếu sum2 = sum1 thì check = 1
                - Dùng vòng for để in ra mảng vừa rồi
            - Khởi tạo biến current_length = j - i + 1; Đây là biến để biết độ dài mảng hiện tại
            - Kiểm tra điều kiện xem độ dài mảng đang là bao nhiêu:
                - Nếu current_length > max_length thì gắn max_length = current_length
                - Gắn max_start = i;
                - Gắn end_start = j;
    - Nếu check == 1 thì thực hiện in ra mảng có tổng thỏa mãn và có độ dài lớn nhất
    - Nếu check == 0 thì in ra không có mảng thỏa mãn

**Độ phức tạp $O(n^3)$**

## Test case
### Case 1:
#### Input:
```
nhap so phan tu cua mang: 9
nhap tung phan tu cho mang: 5 6 -5 5 3 5 3 -2 0 
nhap tong: 8
```
#### Output:
```
-5 5 3 5 
```
---
### Case 2:
#### Input:
```
nhap so phan tu cua mang: 9
nhap tung phan tu cho mang: 5 6 -5 5 3 5 3 -2 0 
nhap tong: 30
```
#### Output:
```
Không có mảng nào có tổng các phần tử bằng tổng mong muốn
```

