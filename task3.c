#include <stdio.h>

int main(void) {
    int apple, orange, strawberry;
    printf("りんご、オレンジ、苺の購入数を,で入力してください: ");
    scanf("%d %d %d", &apple, &orange, &strawberry);
    int total = (100 * apple) + (88 * orange) + (398 * strawberry);
    printf("合計金額: %d円\n", total);
    
    return 0;
}
