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
void selectionsort (int a[], int n){
    for (int i=0; i<n-1;i++){
        int min = a[i];
        int index = i;
        for (int j=i+1;j<n;j++){
            if (a[j]<min){
                min = a[j];
                index = j;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
        inMang(a,n);
    }
}

int main(){
    int n;
    printf ("Nhap so luong phan tu trong mang: ");
    scanf ("%d", &n);
    int a[n];
    nhapMang(a,n);
    selectionsort(a,n);
    printf ("Mang sau khi sap xep: \n");
    inMang(a,n);
    return 0;
}