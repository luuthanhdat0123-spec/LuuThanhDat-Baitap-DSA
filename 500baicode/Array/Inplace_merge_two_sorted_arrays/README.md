# Inplace Merge Two Sorted Arrays

## Mô tả bài toán
- **Đầu vào:** Hai mảng số nguyên `a` (kích thước $n$) và `b` (kích thước $m$) đã được sắp xếp theo thứ tự tăng dần.
- **Đầu ra:** 
  1. Một mảng gộp chứa tất cả các phần tử của `a` và `b`, được sắp xếp tăng dần.
  2. In ra "mảng a mới" và "mảng b mới" tương ứng với việc chia mảng gộp ở trên thành 2 phần có kích thước lần lượt là $n$ và $m$.

## Mô tả giải thuật
Sử dụng hai con trỏ kết hợp với một mảng phụ để thực hiện trộn: 
1. **Khởi tạo:** 
   - Khởi tạo mảng phụ `merged` có kích thước là $n + m$.
   - Sử dụng 3 con trỏ: `i = 0` (duyệt mảng `a`), `j = 0` (duyệt mảng `b`), và `k = 0` (lưu vị trí hiện tại trong mảng `merged`).
   - Lưu lại kích thước ban đầu $x = n$ và $y = m$ để dùng cho việc in mảng sau này.

2. **Tiến hành trộn:**
   - Vòng lặp `while (i < n && j < m)` chạy chừng nào cả hai mảng đều chưa được duyệt hết.
   - So sánh phần tử hiện tại `a[i]` và `b[j]`: Phần tử nào nhỏ hơn sẽ được đẩy vào mảng `merged[k]`. Sau đó tăng con trỏ tương ứng (`i` hoặc `j`) và con trỏ `k` lên 1.
   
3. **Xử lý phần tử còn sót lại:**
   - Nếu mảng `a` vẫn còn phần tử (tức là `i < n`), dùng vòng lặp đưa hết các phần tử còn lại của `a` vào `merged`.
   - Nếu mảng `b` vẫn còn phần tử (tức là `j < m`), đưa hết các phần tử còn lại của `b` vào `merged`.

4. **In kết quả:**
   - In toàn bộ mảng `merged` (từ vị trí $0$ đến $n+m-1$).
   - In $x$ (tức là $n$) phần tử đầu tiên của mảng `merged` và gọi đó là "mảng `a` bây giờ".
   - In $y$ (tức là $m$) phần tử tiếp theo của mảng `merged` (từ vị trí $x$ đến $x+y-1$) và gọi đó là "mảng `b` bây giờ".

**Độ phức tạp thuật toán: $O(n+m)$**

## Test case minh họa
### Input:
```
- Mảng a (n = 5): `1 4 7 8 10`
- Mảng b (m = 3): `2 3 9`
```
### Output:
```
Mang sau khi merge la: 1 2 3 4 7 8 9 10
Mang a bay gio la: 1 2 3 4 7
Mang b bay gio la: 8 9 10
```