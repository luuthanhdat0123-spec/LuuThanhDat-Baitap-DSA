# Find the largest subarray having an equal number of 0’s and 1’s

## Mô tả bài toán
- **Đầu vào:** Một mảng số nguyên gồm $n$ phần tử, mỗi phần tử chỉ nhận giá trị 0 hoặc 1.
- **Đầu ra:** Mảng con dài nhất có số lượng phần tử 0 bằng số lượng phần tử 1. Nếu có nhiều mảng con cùng đạt độ dài lớn nhất, in ra tất cả và ngăn cách bằng chữ `" hoac "`.
    - *Lưu ý:* Các phần tử trong mảng con phải đứng liền kề nhau (chiếm các vị trí liên tiếp trong mảng gốc).

## Mô tả giải thuật
Thuật toán được chia làm 2 giai đoạn duyệt mảng:

**Giai đoạn 1: Tìm độ dài mảng con lớn nhất thỏa mãn điều kiện**
- Khởi tạo `max_length = 0`.
- Sử dụng 2 vòng lặp lồng nhau (biến `i` từ $0$ đến $n-1$, biến `j` từ `i` đến $n-1$) để xác định điểm đầu và điểm cuối của mọi mảng con.
- Với mỗi mảng con từ vị trí `i` đến `j`, dùng thêm vòng lặp thứ 3 (biến `k` từ `i` đến `j`) để đếm số lượng số 0 (`count0`) và số lượng số 1 (`count1`).
- Nếu `count0 == count1` và độ dài mảng con hiện tại (`j - i + 1`) lớn hơn hoặc bằng `max_length`, cập nhật lại `max_length`.

**Giai đoạn 2: In ra các mảng con đạt độ dài lớn nhất**
- Nếu `max_length > 0`, in ra câu dẫn `"Mang con lon nhat co so 0 va 1 bang nhau la: "`. Khởi tạo cờ hiệu `first_printed = 1`.
- Tiếp tục sử dụng lại 3 vòng lặp lồng nhau `i, j, k` y hệt như giai đoạn 1 để kiểm tra lại toàn bộ các mảng con.
- Nếu mảng con có `count0 == count1` và có độ dài bằng chính `max_length`:
    - Nếu đây không phải mảng đầu tiên được in (`!first_printed`), in thêm chữ `" hoac "` để ngăn cách.
    - Duyệt vòng lặp `k` để in ra các phần tử của mảng con đó, bọc trong cặp dấu ngoặc nhọn `{ }`.
    - Cập nhật `first_printed = 0` để đánh dấu đã in ít nhất một mảng.
- Nếu `max_length == 0` (không tìm thấy), in ra `"Khong tim thay mang phu hop\n"`.

**Độ phức tạp thuật toán:** **$O(n^3)$** (Do sử dụng 3 vòng lặp lồng nhau).

## Test case
### Case 1:
#### Input:
{ 0, 0, 1, 0, 1, 0, 0 }

#### Output:
Mang con lon nhat co so 0 va 1 bang nhau la: { 0 1 0 1 } hoac { 1 0 1 0 }

---
### Case 2:
#### Input:
{ 1, 1, 0, 0, 1, 1 }

#### Output:
Mang con lon nhat co so 0 va 1 bang nhau la: { 1 1 0 0 } hoac { 1 0 0 1 } hoac { 0 0 1 1 }