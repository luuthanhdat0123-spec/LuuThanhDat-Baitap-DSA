#include <stdio.h>
int HanoiTower (int n){
    int buoc=0;
    for (int i = 0; i <= n; i++){
        buoc = 2 * i + 1;
    }
    return buoc;
}
int main(){
    int n;
    printf("Nhap so dia: ");
    scanf("%d", &n);
    int soBuoc = HanoiTower(n);
    printf("So buoc di chuyen: %d\n", soBuoc);
    return 0;
}