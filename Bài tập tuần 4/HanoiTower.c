#include <stdio.h>
void HanoiTower (int n, char cotA, char cotB, char cotC){
    if (n == 1) {
        printf("Di chuyen dia 1 tu cot %c den cot %c\n", cotA, cotC);
    } else {
        HanoiTower(n - 1, cotA, cotC, cotB);
        printf("Di chuyen dia %d tu cot %c den cot %c\n", n, cotA, cotC);
        HanoiTower(n - 1, cotB, cotA, cotC);
    }
}
int main() {
    int n;
    printf("Nhap so dia: ");
    scanf("%d", &n);
    HanoiTower(n, 'A', 'B', 'C');
    return 0;
}