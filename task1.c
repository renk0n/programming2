#include <stdio.h>
int main(void){
    double a,b,c;
    printf("3つの実数を,で区切って入力してください\n");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    double average = (a + b + c) / 3.0;
    printf("平均:%lf\n",average);
    
    return 0;
    // Your code here!
    
}
