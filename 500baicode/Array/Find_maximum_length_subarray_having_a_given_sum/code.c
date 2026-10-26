#include <stdio.h>
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

void check_subarray_with_sum (int a[], int n){
    int check = 0;
    int sum1;
    printf ("Nhap tong mong muon: ");
    scanf ("%d", &sum1);
    int max_length = 0;
    int max_start = 0;
    int max_end = 0;
    for (int i = 0; i < n; i++){
        int sum2 = 0;
        for (int j = i; j < n; j++){
            sum2 += a[j];
            if (sum2 == sum1){
                check = 1;
                printf ("Mang con co tong bang %d la: ", sum1);
                printf ("{ ");
                for (int k = i; k <= j; k++){
                    printf ("%d ", a[k]);
                }
                printf ("} \n");
            int current_length = j - i + 1;
        if (current_length > max_length){
            max_length = current_length;
            max_start = i;
            max_end = j;
        }
    }
    }
}
    if (check == 1){
        printf ("Mang con co tong bang %d co nhieu phan tu nhat la: ", sum1);
        printf ("{ ");
        for (int k = max_start; k <= max_end; k++){
            printf ("%d ", a[k]);
        }
        printf ("} \n");
    }
    else {
        printf ("Khong tim thay mang con co tong bang %d", sum1);
    }
}
int main(){
    int n;
    printf ("Nhap so phan tu cua mang: ");
    scanf ("%d", &n);
    int a[n];
    nhapmang (a, n);
    inmang (a, n);
    check_subarray_with_sum (a, n);
    return 0;
}