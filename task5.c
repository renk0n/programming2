#include <stdio.h>

int main(void) {
    double base, height;
    printf("三角形の底辺と高さを実数スペースで区切って入力してください: ");
    scanf("%lf %lf", &base, &height);
    
    // 底辺 × 高さ ÷ 2
    double area = (base * height) / 2.0;
    printf("三角形の面積: %f\n", area);
    
    return 0;
}
