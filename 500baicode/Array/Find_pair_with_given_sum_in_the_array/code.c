#include <stdio.h>

void nhapmang (int a[], int n){
    for (int i=0; i < n; i++){
        printf ("Nhap phan tu a[%d]: ", i);
        scanf ("%d", &a[i]);
    }
}

void inmang (int a[], int n){
    printf ("Mang da nhap la: ");
    for (int i=0; i < n; i++){
        printf ("%d ", a[i]);
    }
    printf ("\n");
}

void find_pair_with_sum (int a[], int n, int sum){
    int check = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i] + a[j] == sum && i != j){
                printf ("Cap so co tong bang %d la: (%d, %d)\n", sum, a[i], a[j]);
                check = 1;
            }
        }
    }
    if (check == 0) {
        printf ("Khong tim thay cap so co tong bang %d\n", sum);
    }
}

int main(){
    int n, sum;
    printf ("Nhap so phan tu cua mang: ");
    scanf ("%d", &n);
    int a[n];
    nhapmang (a, n);
    inmang (a, n);
    printf ("Nhap tong can tim: ");
    scanf ("%d", &sum);
    find_pair_with_sum (a, n, sum);
    return 0;
}