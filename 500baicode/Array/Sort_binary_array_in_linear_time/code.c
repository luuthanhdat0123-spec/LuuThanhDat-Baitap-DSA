#include <stdio.h>
int sort (int a[], int n){
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == 0) count0++;
        else count1++;
    }
    for (int i = 0; i < count0; i++){
        a[i] = 0;
        printf("%d ", a[i]);
    }
    for (int i = count0; i < n; i++){
        a[i] = 1;
        printf("%d ", a[i]);
    }
}

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