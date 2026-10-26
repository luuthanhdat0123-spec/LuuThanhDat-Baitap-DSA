#include <stdio.h>

void nhapmang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void inmang(int arr[], int n) {
    printf("Mang da nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int so_lon (int arr[], int a, int b) { return (a > b) ? a : b; }
int so_nho (int arr[], int a, int b) { return (a < b) ? a : b; }
int so_trung (int arr[], int start, int end, int value){
    for (int i = start; i < end; i++) {
        if (arr[i] == value) {
            return 1;
        }
    }
    return 0;
}
void Findlargestconsecutiveintergers(int arr[], int n) {
    int dem_len = 0;
    int start = 0;
    int end = 0;
    for (int i = 0; i < n - 1; i++){
        int min = arr[i];
        int max = arr[i];
        for (int j = i + 1; j < n; j++){
            if (so_trung(arr, i, j, arr[j])) break;
            min = so_nho(arr, min, arr[j]);
            max = so_lon(arr, max, arr[j]);
            if (max - min == j - i) {
                int current_len = j - i + 1;
                if (current_len > dem_len) {
                    dem_len = current_len;
                    start = i;
                    end = j;
                }
            }
        }
    }
    if (dem_len < 2) {
        printf("Khong tim thay mang con lien tiep (do dai >= 2).\n");
    } else {
        printf("Mang lon nhat gom cac chu so nguyen lien tiep la: { ");
        for (int i = start; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("}\n");
    }
}

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    nhapmang(arr, n);
    inmang(arr, n);
    Findlargestconsecutiveintergers(arr, n);
    return 0;
}