#include <stdio.h>
#include <stdbool.h>
#define maxSize 100

int main(){
    int n, i, luachon, pos, value, del, kiemtra = 0;
    int a[maxSize];
    while (true)
    {
        printf("\n");
        printf("MENU\n");
        printf("\n1. Nhập vào mảng\n");
        printf("\n2. Hiển thị mảng\n");
        printf("\n3. Thêm phần tử\n");
        printf("\n4. Sửa phần tử\n");
        printf("\n5. Xóa phần tử\n");
        printf("\n6. Thoát\n");
        printf("\nLựa chọn của bạn: ");
        scanf("%d", &luachon);
        printf("\n");
        
        if( luachon == 6){
            return 0;
        }
        while (true)
        {
            if (kiemtra > 0)
            {
                break;
            }
            if (luachon != 1)
            {
                printf("Bạn chưa nhập vào mảng: \n");
                printf("\n");
                break;
            }
            else
            {
                break;
            }
        }
        switch (luachon)
        {
        case 1:
            kiemtra++;
            printf("Nhập số phần tử muốn nhập: ");
            scanf("%d", &n);
            printf("\n");
            if(n < 0 || n > maxSize){
                printf("Số lượng phần tử nhập vào không hợp lệ\n");
                return 1;
            }
            for (int i = 0; i < n; i++) {
                printf("Nhập phần tử thứ %d: ", i + 1);
                scanf("%d", &a[i]);
                printf("\n");
            }
            printf("\n");
            break;
        
        case 2:
            printf("Mảng hiện tại: ");
            for (int i = 0; i < n; i++) {
                printf("%d   ", a[i]);
            }
            printf("\n");
            break;
        
        case 3:
            printf("Mảng hiện tại: ");
            for (int i = 0; i < n; i++) {
                printf("%d   ", a[i]);
            }
            printf("\n");
            printf("\nNhập giá trị muốn chèn: ");
            scanf("%d", &value);
            printf("\nVị trí muốn thêm vào mảng: ");
            scanf("%d", &pos);
        
            if (pos < 0 || pos > n) {
                printf("Vị trí nhập vào không hợp lệ\n");
                return 1;
            }
        
            for (int i = n; i >= pos; i--) {
                a[i] = a[i - 1];
            }
            a[pos - 1] = value;
            n++;
            break;
            
        case 4:
            printf("Mảng hiện tại: ");
            for (int i = 0; i < n; i++) {
                printf("%d   ", a[i]);
            }
            printf("\n");
            printf("\nNhập vị trí cần sửa: ");
            scanf("%d", &pos);
            printf("\nNhập giá trị cần sửa: ");
            scanf("%d", &value);
            
            if (pos < 0 || pos > n) {
                printf("Vị trí nhập vào không hợp lệ\n");
                return 1;
            }
            
            for (int i = 0; i < n; i++) 
            {
                if (i == pos)
                {
                    a[i - 1] = value;
                }
            }
            break;
        case 5:
            printf("Mảng hiện tại: ");
            for (int i = 0; i < n; i++) {
                printf("%d   ", a[i]);
            }
            printf("\n");
            printf("\nNhập vị trí phần tử cần xóa: ");
            scanf("%d", &del);

            if (del < 0 || del > n) {
                printf("Vị trí nhập vào không hợp lệ\n");
                return 1;
            }
            for (int i = del - 1; i < n - 1; i++) {
                a[i] = a[i + 1];
            }
            n--;  

        default:
            printf("Không có lựa chọn này: ");
            break;   
    }
} 
