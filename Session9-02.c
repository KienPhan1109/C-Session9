#include <stdio.h>

#define maxSize 100

int main() {
    int arr[maxSize];
    int n;

    printf("Nhập số phần tử muốn nhập: ");
    scanf("%d", &n);

    
    if (n < 0 || n > maxSize) {
        printf("Số lượng phần tử nhập vào không hợp lệ\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mảng trước khi chèn: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int pos, value;
    printf("Nhập vị trí cần sửa: ");
    scanf("%d", &pos);
    printf("Nhập giá trị cần sửa: ");
    scanf("%d", &value);

    if (pos < 0 || pos > n) {
        printf("Vị trí nhập vào không hợp lệ\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        if (i == pos)
        {
            arr[i - 1] = value;
        }
        
    }
    printf("Mảng sau khi sửa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}