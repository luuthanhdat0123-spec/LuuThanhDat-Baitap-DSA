# 🗼 Tower of Hanoi: Minimum Moves Calculation

Dự án này triển khai thuật toán tính số bước di chuyển tối thiểu để giải quyết bài toán Tháp Hà Nội (Tower of Hanoi) bằng ngôn ngữ C/C++. 

Repository cung cấp 2 phương pháp tiếp cận: **Đệ quy (Recursive)** và **Khử đệ quy (Iterative)** để đối chiếu hiệu năng quản lý bộ nhớ và tốc độ thực thi.

---

## 📐 Nền tảng Toán học (Mathematical Foundation)

Số bước di chuyển đĩa trong tháp Hà Nội tuân theo hệ thức truy hồi (Recurrence Relation):
*   **Điều kiện cơ sở:** $T(1) = 1$
*   **Hệ thức:** $T(n) = 2T(n-1) + 1$

Bằng phương pháp khai triển, ta có thể chứng minh phương trình tổng quát cho bài toán này là một cấp số nhân:
$T(n) = 2^n - 1$

---

## ⚙️ Đánh giá Độ phức tạp (Complexity Analysis)

Nếu bài toán yêu cầu **in ra từng bước di chuyển vật lý**, thời gian thực thi sẽ là $O(2^n)$. Tuy nhiên, đoạn code trong dự án này chỉ tập trung vào việc **tính toán tổng số bước**, giúp độ phức tạp được tối ưu rút gọn như sau:

### 1. Cách tiếp cận Đệ quy (Recursive)
*   **Time Complexity:** $O(N)$ - Hàm gọi lại chính nó $N$ lần.
*   **Space Complexity:** $O(N)$ - Mỗi lần gọi đệ quy, CPU đẩy trạng thái vào Stack memory. Nếu $N$ lớn, nguy cơ tràn Call Stack (Stack Overflow) là rất cao.

### 2. Cách tiếp cận Khử Đệ quy (Iterative - Khuyên dùng)
*   **Time Complexity:** $O(N)$ - Vòng lặp `for` duyệt đúng $N$ vòng.
*   **Space Complexity:** $O(1)$ - Không tốn thêm RAM ngoài biến `moves` và `i`. Giải pháp tối ưu cho phần cứng hạn chế.

---

## 📝 Diễn giải các bước thực hiện giải thuật (Algorithm Logic)

### 1. Thuật toán Đệ quy (Recursive)
Để chuyển $n$ đĩa từ cột Nguồn (Source) sang cột Đích (Destination) thông qua cột Trung gian (Auxiliary), giải thuật thực hiện 3 bước:
* **Bước 1:** Chuyển $n-1$ đĩa nằm trên cùng từ cột Nguồn sang cột Trung gian (lấy cột Đích làm trạm trung chuyển).
* **Bước 2:** Chuyển đĩa thứ $n$ (đĩa lớn nhất) từ cột Nguồn sang cột Đích.
* **Bước 3:** Chuyển $n-1$ đĩa từ cột Trung gian sang cột Đích (lấy cột Nguồn làm trạm trung chuyển).
* **Điều kiện dừng (Base case):** Khi $n = 1$, di chuyển đĩa trực tiếp từ Nguồn sang Đích và kết thúc hàm.

### 2. Thuật toán Khử đệ quy (Iterative)
* **Bước 1:** Khởi tạo biến `moves = 0`.
* **Bước 2:** Sử dụng vòng lặp `for` chạy từ `1` đến `n`.
* **Bước 3:** Tại mỗi vòng, áp dụng công thức tích lũy dựa trên quan hệ truy hồi: `moves = moves * 2 + 1`.
* **Bước 4:** Kết thúc vòng lặp, trả về tổng số `moves`.


