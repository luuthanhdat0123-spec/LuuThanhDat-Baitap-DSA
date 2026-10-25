--------- Mô tả giải thuật bài toán tìm mảng con có tổng các phần tử = 0 ---------------
        Tạo biến sum  = 0; Dùng 2 vòng lặp:
        Lấy a[i] ban đầu (i=0), sau đó trong vòng j từ i đến n thì mỗi vòng cộng 
        sum += a[j], cứ cộng mỗi khi mà sum = 0 thì in ngay mảng đấy;
        Lặp lại với a[i], i=1
        ..........