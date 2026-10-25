// y hệt bài check_if_a_subarray_with_0_sum_exists_or_not
#include <stdio.h>

void inmang (int a[], int n){
    printf ("Mang da nhap la: ");
    for (int i=0; i < n; i++){
        printf ("%d ", a[i]);
    }
    printf ("\n");
}

void nhapmang (int a[], int n){
    for (int i=0; i < n; i++){
        printf ("Nhap phan tu a[%d]: ", i);
        scanf ("%d", &a[i]);
    }
}

void check_subarray_with_sum0 (int a[], int n){
    int check = 0;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum += a[j];
            if (sum == 0){
                check = 1;
                printf ("Mang con co tong bang 0 la: ");
                printf ("{ ");
                for (int k = i; k <= j; k++){
                    printf ("%d ", a[k]);
                }
                printf ("} \n");
            }  
        }
    }
    if (check == 0){
        printf ("Khong tim thay mang con co tong bang 0");
    }
}

int main(){
    int n;
    printf ("Nhap so phan tu cua mang: ");
    scanf ("%d", &n);
    int a[n];
    nhapmang (a, n);
    inmang (a, n);
    check_subarray_with_sum0 (a, n);
    return 0;
}