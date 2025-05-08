#include <stdio.h>
int main() {
    char password[] = "rikkei2025";
    char userInput[50];
    printf("nhap mat khau: ");
    scanf("%s", userInput);
    if (strcmp(userInput, password)==0){
        printf("Mat khau chinh xac\n");
    }else {
        printf("Sai mat khau\n");
    }
    return 0;
}
