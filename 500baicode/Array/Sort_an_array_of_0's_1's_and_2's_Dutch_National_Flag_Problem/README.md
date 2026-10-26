# Dutch National Flag Problem
## Mô tả bài toán
- **Đầu vào:** Một mảng số nguyên gồm $n$ phần tử, mỗi phần tử chỉ nhận giá trị 0, 1 hoặc 2.
- **Đầu ra:** Mảng đã được sắp xếp tăng dần sao cho tất cả các số 0 nằm ở đầu, các số 1 ở giữa và các số 2 nằm ở cuối mảng.

## Mô tả giải thuật
Thuật toán sử dụng 3 con trỏ để chia mảng thành 4 vùng:
- low: Vị trí kế tiếp để điền số 0 (các phần tử từ vị trí 0 đến low - 1 đều là số 0).
- mid: Con trỏ hiện tại dùng để duyệt mảng (các phần tử từ low đến mid - 1 đều là số 1).
- high: Vị trí kế tiếp để điền số 2 (các phần tử từ high + 1 đến n - 1 đều là số 2).

**Các bước thực hiện:**
1. Khởi tạo 3 con trỏ: `low = 0`, `mid = 0`, và `high = n - 1`.
2. Sử dụng vòng lặp `while` để duyệt mảng chừng nào `mid <= high`:
    - **Trường hợp `a[mid] == 0`:** Đổi chỗ `a[low]` và `a[mid]`. Tăng cả `low` và `mid` lên 1 (đẩy số 0 về đầu và tiếp tục duyệt).
    - **Trường hợp `a[mid] == 1`:** Không cần đổi chỗ, chỉ cần tăng `mid` lên 1 (bỏ qua số 1 để giữ nó ở giữa).
    - **Trường hợp khác (`a[mid] == 2`):** Đổi chỗ `a[mid]` và `a[high]`. Giảm `high` đi 1 (đẩy số 2 về cuối mảng). *Lưu ý: Không tăng `mid` trong trường hợp này vì phần tử vừa được hoán vị từ vị trí `high` xuống `mid` cần được kiểm tra ở vòng lặp tiếp theo.*

**Độ phức tạp thuật toán: $O(n)$**

## Test case
### Case 1:
#### Input:
```
{ 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }
```
#### Output:
```
0 0 0 0 0 1 1 1 1 1 2 2
```
---
### Case 2:
#### Input:
```
{ 2, 0, 1 }
```
#### Output:
```
0 1 2
```