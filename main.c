//请在下方输入你的代码：
#include "stdio.h"
int main() {
    //正三角
    for (int i = 1; i <= 9; i++) {
        for (int p = 1; p <= i; p++) {
            printf("%d*%d=%d ", p, i, p * i);
        }
        printf("\n");
    }
    //倒三角
    for (int i = 1; i <= 9; i++) {
        for (int p = 9; p >= i; p--) {
            printf("%d*%d=%d ", p, i, p * i);
        }
        printf("\n");
    }
    return 0;
}
