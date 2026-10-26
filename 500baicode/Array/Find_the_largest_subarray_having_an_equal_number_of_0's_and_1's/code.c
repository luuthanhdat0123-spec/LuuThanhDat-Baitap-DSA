#include <stdio.h>
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void inmang(int a[], int n) {
    printf("Mang da nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void tim_mang_con_0_1_bang_nhau(int a[], int n) {
    int max_length = 0;
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int count0 = 0;
            int count1 = 0;
            for (int k = i; k <= j; k++) {
                if (a[k] == 0) count0++;
                else count1++;
            }
            if (count0 == count1) {
                int current_length = j - i + 1;
                if (current_length >= max_length) {
                    max_length = current_length;
                }
            }
        }
    }
    if (max_length > 0) {
        printf("Mang con lon nhat co so 0 va 1 bang nhau la: ");
        int first_printed = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int count0 = 0;
                int count1 = 0;
                for (int k = i; k <= j; k++) {
                    if (a[k] == 0) count0++;
                    else count1++;
                }
                if (count0 == count1 && (j - i + 1) == max_length) {
                    if (!first_printed) printf(" hoac ");
                    printf("{ ");
                    for (int k = i; k <= j; k++) {
                        printf("%d ", a[k]);
                    }
                    printf("}");
                    first_printed = 0;
                }
            }
        }
    } else {
        printf("Khong tim thay mang phu hop\n");
    }
}

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    nhapmang(a, n);
    inmang(a, n);
    tim_mang_con_0_1_bang_nhau(a, n);
    return 0;
}