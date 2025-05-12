#include <stdio.h>

int main() {
    int num, isPrime = 1;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (num < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d la so nguyen to.\n", num);
    } else {
        printf("%d khong phai la so nguyen to.\n", num);
    }
    return 0;
}

