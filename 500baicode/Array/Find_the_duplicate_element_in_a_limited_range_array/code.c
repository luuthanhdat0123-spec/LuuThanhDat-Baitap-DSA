#include <stdio.h>

void nhapmang(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void inmang(int a[], int n){
    printf("Mang da nhap la: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sort(int a[], int n){
    int check = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                check = 1;
                printf("Phan tu trung lap la: %d\n", a[i]);
                break;
            }
        }
    }
    if (check == 0) printf ("Khong co phan tu nao trung lap\n");
}

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    nhapmang(a, n);
    inmang(a, n);
    sort(a, n);
    return 0;
}