#include <stdio.h>

int main() {
    int number[5];
    int sochan = 0, sole = 0;
    int i;
    printf("nhap 5 so nguyen \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < 5; i++) {
        if (number[i] % 2 == 0) {
            sochan++;
        } else {
            sole++;
        }
    }
    printf("so luong so chan la %d\n", sochan);
    printf("so luong so le la %d\n", sole);

    return 0;
}
