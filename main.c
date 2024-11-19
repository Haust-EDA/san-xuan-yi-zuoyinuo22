//请在下方输入你的代码：
#include "stdio.h"
int main() {
    for (int i = 1; i <= 9; i++) {
        for (int p = 1; p <= i; p++) {
            printf("%d*%d=%d ", p, i, p * i);
        }
        printf("\n");
    }
    for (int i = 9; i >= 1; i--) {
        for (int p = 1; p <= i; p++) {
            printf("%d*%d=%d ", i, p, i* p);
        }
        printf("\n");
    }
    return 0;
}