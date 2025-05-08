#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    int i;
    printf("nhap 5 so nguyen ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            sum = sum + numbers[i];
        }
    }
    printf("tong cac so le la %d", sum);

    return 0;
}
