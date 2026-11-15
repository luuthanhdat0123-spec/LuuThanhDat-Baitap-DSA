# MERGE TWO ARRAYS BY SATISFYING GIVEN CONSTRAINTS

## **Mô tả bài toàn:**
1. **Cho mảng x[m] và y[n]:**
    - Mảng x nhập $m-n$ phần tử khác 0 và n phần tử rỗng (ký hiệu bằng số 0)
    - Mảng y nhập $n$ phần tử khác 0
2. **Trộn mảng x[m] và y[n]:**
    - Mảng kết quả bao gồm $m + n$ phần tử đã được sắp xếp
    - In ra mảng x[m];

## **Mô tả giải thuật:**
1. Hàm in mảng, hàm nhập mảng
2. Hàm sắp xếp lại thứ tự mảng:
    - Dồn tất cả phần tử khác 0 của mảng x sang bên phải:
        + Dùng con trỏ k vào phần tử cuối cùng của mảng x(m-1)
        + Sử dụng vòng lặp for duyệt từ phần tử m-1 đến 0. Nếu a[i] khác 0 thì lưu a[i]=a[k], sau đó giảm k đi 1 phần tử
3. Hàm trộn mảng (mergearray):
    - Sử dụng 3 con trỏ:
        + Con trỏ k=0 chỉ vào phần tử 0 của mảng x
        + Con trỏ j=0 chỉ vào phần tử 0 của mảng y
        + Con trỏ i chỉ vào phần tử khác 0 đầu tiên của mảng x (i=n)
    - Dùng while (k < m):
        + Nếu i == m hoặc (j < n và y[j]< x[i]) thì gán x[k]=y[j] và tăng j thêm 1;
        + Không thì gán x[k] = x[i] (Lưu ý: khi nhập dữ liệu vào mảng thì x, y đều đã được sắp xếp theo thứ tự tăng dần rồi)
        + tăng k++
4. Độ phức tạp thuật toán: O($n^2$)

## **Test case**
### Input:
```
x[m] = { 0, 2, 0, 3, 0, 5, 6, 0, 0}

y[n] = {1, 8, 9, 10, 15}
```
### Output:
```
x[m] = {1, 2, 3, 5, 6, 8, 9, 10, 15}
```

