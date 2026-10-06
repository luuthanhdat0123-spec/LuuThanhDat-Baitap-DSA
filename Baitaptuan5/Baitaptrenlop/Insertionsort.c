#include <stdio.h>
void nhapMang(int a[], int n){
    for (int i=0; i<n;i++){
        printf ("Nhap phan tu a[%d]:",i);
        scanf ("%d", &a[i]);
    }
}
void inMang (int a[], int n){
    for (int i=0; i<n;i++){
        printf ("%d  ", a[i]);
    }
    printf ("\n");
}
void Insertionsort (int a[], int n){
    for (int i=1; i<n; i++){
        int min = a[i];
        int j = i-1;
        while (j>=0 && a[j]>min){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = min;
        inMang(a,n);
    }
}
int main(){
    int n;
    printf ("Nhap so luong phan tu trong mang: ");
    scanf ("%d", &n);
    int a[n];
    nhapMang(a,n);
    Insertionsort(a,n);
    printf ("Mang sau khi sap xep: \n");
    inMang(a,n);
    return 0;
}