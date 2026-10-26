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
void merge(int a[], int b[], int n, int m) {
    int i = 0, j = 0, k = 0;
    int x = n, y = m;
    int merged[n + m];
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < n) {
        merged[k++] = a[i++];
    }
    while (j < m) {
        merged[k++] = b[j++];
    }
    printf("Mang sau khi merge la: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    printf ("Mang a bay gio la: ");
    for (int i = 0; i < x; i++){
        printf("%d ", merged[i]);
    }
    printf("\n");
    printf ("Mang b bay gio la: ");
    for (int i = x; i < x + y; i++){
        printf("%d ", merged[i]);
    }
}
int main(){
    int n, m;
    printf("Nhap so phan tu cua mang a: ");
    scanf("%d", &n);
    int a[n];
    nhapmang(a, n);
    inmang(a, n);
    printf("Nhap so phan tu cua mang b: ");
    scanf("%d", &m);
    int b[m];
    nhapmang(b, m);
    inmang(b, m);
    merge(a, b, n, m);
    return 0;
}