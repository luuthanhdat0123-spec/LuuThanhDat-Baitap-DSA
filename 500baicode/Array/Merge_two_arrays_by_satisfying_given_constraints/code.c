#include <stdio.h>
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void sapxep(int x[], int m){
    int k = m-1;
    for (int i = m - 1; i >= 0; i--){
        if (x[i] != 0){
            x[k] = x[i];
            k--;
        }       
    }
}
void inmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void mergearray(int x[], int m, int y[], int n){
    int i = n;
    int j = 0;
    int k = 0;
    while (k < m){
        if ((j < n && x[i] > y[j]) || (i == m)){
            x[k] = y[j];
            j++;
        } else {
            x[k] = x[i];
            i++;
        }
        k++;
    }
}
int main(){
    int m, n; 
    printf ("Nhap so phan tu cua x: "), scanf ("%d", &m);
    printf ("Nhap so phan tu cua y: "), scanf ("%d", &n);
    int x[m], y[n];
    nhapmang(x, m);
    nhapmang(y, n);
    sapxep(x, m);
    mergearray(x, m, y, n);
    inmang(x, m);
    return 0;
}