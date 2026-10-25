------------ Mô tả giải thuật bài toán tìm 2 cặp số có tổng bằng tổng cho trước ----------
            Cho mang a[5] = {2,5,6,4,10}
            Giả sử tìm tổng bằng 11
            Mình sẽ quét dần dần, ví dụ chọn a[0] = 2 trước. Sau đó
            lấy a[0] + lần lượt a[1,2,3,4].
            Lấy tiếp a[1] + a [0,2,3,4]
            .......
            Vậy sẽ  ra được là 11 = a[1] + a[2] = a[2] + a[1];
            Cho điều kiện nếu tìm ra thì gắn biến kiemtra = 1;
            Nếu không có cặp nào thỏa mãn thì kiểm tra biến "kiemtra",
            "kiemtra" = 0 thì in ra không có cặp thỏa mãn;