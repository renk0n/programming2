#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("クラスの人数(a)、野球のチーム数(b)、バレーのチーム数(c)をスペースで区切って入力してください: ");
    scanf("%d %d %d", &a, &b, &c);
    int exclude = a - ((9 * b) + (6 * c));
    printf("参加できない人数: %d人\n", exclude);
    return 0;
}
