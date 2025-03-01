#include <stdio.h>

int main(){
    int a, b;
    int sum = 0;
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);

    for(int i = a; i <= b; i++){
        sum += i;
    }
    printf("Tong: %d\n", sum);
    return 0;
}
