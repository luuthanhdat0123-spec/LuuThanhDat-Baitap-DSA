#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quicksort (int a[], int trai, int phai){
    if (trai<phai){
        int pivot = a[trai];
        int i = trai + 1;
        int j = phai;
        while (1) {
            while (i <= phai && a[i] <= pivot) {
                i++;
            }
            while (j >= trai && a[j] > pivot) {
                j--;
            }
            if (j <= i) {
                swap(&a[trai], &a[j]);
                break;
            } else {
                swap(&a[i], &a[j]);
                i++;
                j--;
            }
        }
    quicksort (a, trai, j-1);
    quicksort (a, i + 1, phai);
    }
}
void inmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    int a[] = {75, 70, 65, 84, 98, 78, 100, 93, 55, 61, 81, 68};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Mang ban dau: ");
    inmang(a, n);
    quicksort(a, 0, n - 1);
    printf("Mang sau khi sap xep: ");
    inmang(a, n);
    return 0;
}