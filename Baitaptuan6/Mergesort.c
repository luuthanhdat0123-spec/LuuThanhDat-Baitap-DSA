#include <stdio.h>
void gop_mang (int a[], int trai, int giua, int phai){
    int i = trai;
    int j = giua + 1;
    int k = 0;
    int temp[phai - trai + 1];
    while (i <= giua && j <= phai) {
        if (a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }
    while (i <= giua) {
        temp[k++] = a[i++];
    }
    while (j <= phai) {
        temp[k++] = a[j++];
    }
    for (int m = 0; m < k; m++) {
        a[trai + m] = temp[m];
    }
}
void chia_mang (int a[], int trai, int phai){
    if (trai >= phai){
        return;
    }
    int giua = trai + (phai-trai)/2;
    chia_mang(a, trai, giua);
    chia_mang(a, giua+1, phai);
    gop_mang(a, trai, giua, phai);
}
void inMang(int a[], int n){
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf ("%d ", a[i]);
    }
    printf ("\n");
}

int main(){
    int n; printf ("Nhap so phan tu: "); scanf ("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf ("Nhap phan tu a[%d]: ", i);
        scanf ("%d", &a[i]);
    }
    chia_mang(a, 0, n-1);
    inMang(a, n);
    return 0;
}