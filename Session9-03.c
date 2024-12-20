#include <stdio.h>

#define maxSize 100

int main(){
    int n;
    printf("Nhập số phần tử muốn nhập: ");
    scanf("%d", &n);
    int a[n];
    if(n < 0 || n > maxSize){
        printf("Số lượng phần tử nhập vào không hợp lệ\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    
    printf("Mảng trước khi xóa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    int del;
    printf("\nNhập vị trí phần tử cần xóa: ");
    scanf("%d", &del);

    if (del < 0 || del > n) {
        printf("Vị trí nhập vào không hợp lệ\n");
        return 1;
    }
    for (int i = del - 1 ; i < n - 1; i++) {
                a[i] = a[i + 1];
    }
    n--;    
    printf("Mảng sau khi xóa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    system("pause");
}