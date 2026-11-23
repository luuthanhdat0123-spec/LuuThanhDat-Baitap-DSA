#include <stdio.h>
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void inmang(int a[], int n) {
    printf("Mang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int find_index_of_zero(int a[], int n){
    int max_count = 0; // độ dài chuỗi 1 dài nhất tìm được
    int count = 0; // Độ dài chuỗi 1 hiện tại
    int replace_zero = -1; // Vị trí số 0 cần thay thế
    int last_meet_zero = -1; // Vị trí số 0 cuối cùng gặp
    for (int i = 0; i < n; i++){
        if (a[i] == 1){
            count++;

        }
        else{
            count = i - last_meet_zero; // độ dài mảng lúc gặp số 0 tiếp theo kể từ vị trí số 0 cuối cùng
            last_meet_zero = i; // cập nhật vị trí số 0 cuối cùng gặp
        }
        if (count > max_count){
            max_count = count;
            replace_zero = last_meet_zero;
        }
    }
    return replace_zero;
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    nhapmang(a, n);
    inmang(a, n);
    int index = find_index_of_zero(a, n);
    if (index != -1) {
        printf("Vi tri so 0 can thay the de co chuoi 1 lien tuc dai nhat: %d\n", index);
        a[index] = 1; // Thay thế số 0 tại vị trí index bằng số 1
        inmang(a, n);
    } else {
        printf("Khong tim thay vi tri so 0 can thay the.\n");
    }
    return 0;
}